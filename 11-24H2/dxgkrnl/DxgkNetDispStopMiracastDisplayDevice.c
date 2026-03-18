/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1401AEBC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140043874 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x14006A918 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x14006AD68 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStopMiracastSession @ 0x140081D2C (DxgkMiracastStopMiracastSession.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(unsigned __int16 *a1, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r12
  struct DXGPROCESS *Current; // rax
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  WCHAR *v12; // rax
  size_t v13; // rbx
  NTSTATUS v14; // eax
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+B8h] [rbp+20h] BYREF

  v16 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return 2147483656LL;
  Current = DXGPROCESS::GetCurrent();
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    v16 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      v4 = 0LL;
    v9 = RtlStringCchLengthW(a1, 0x208uLL, &v16);
    if ( v9 >= 0 )
    {
      v10 = v16;
      v11 = 2 * (v16 + 1);
      if ( !is_mul_ok(v16 + 1, 2uLL) )
        v11 = -1LL;
      v12 = (WCHAR *)operator new[](v11, 0x4B677844u, 256LL);
      v4 = v12;
      if ( v12 )
      {
        v13 = v10;
        memmove(v12, a1, v13 * 2);
        v4[v13] = 0;
        if ( Handle
          && (Object = 0LL,
              v14 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL),
              v5 = (struct _KEVENT *)Object,
              v14 < 0) )
        {
          v8 = -2147483640;
          WdLogSingleEntry1(2LL, Handle);
          WdLogGlobalForLineNumber = 9812;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Caller specified event handle (0x%I64x) is not an valid event handle.",
            (__int64)Handle,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          v8 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v8 = -2147483638;
        WdLogSingleEntry1(6LL, -2147483638LL);
        WdLogGlobalForLineNumber = 9780;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to allocate buffer for LocalDeviceName, returning 0x%I64x",
          -2147483638LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v8 = -2147483640;
      WdLogSingleEntry1(3LL, v9);
      WdLogGlobalForLineNumber = 9769;
    }
  }
  else
  {
    v8 = -2147483643;
    WdLogSingleEntry1(3LL, -2147483643LL);
    WdLogGlobalForLineNumber = 9745;
  }
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  return v8;
}
