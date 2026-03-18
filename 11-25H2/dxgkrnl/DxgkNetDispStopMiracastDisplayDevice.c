/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1401AC6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140043C04 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x14006ACEC (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x14006B148 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStopMiracastSession @ 0x1400816AC (DxgkMiracastStopMiracastSession.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(unsigned __int16 *a1, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r12
  struct DXGPROCESS *Current; // rax
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  WCHAR *v13; // rax
  size_t v14; // rbx
  NTSTATUS v15; // eax
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+B8h] [rbp+20h] BYREF

  v17 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return 2147483656LL;
  Current = DXGPROCESS::GetCurrent();
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    v17 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      v4 = 0LL;
    v9 = RtlStringCchLengthW(a1, 0x208uLL, &v17);
    if ( v9 >= 0 )
    {
      v11 = v17;
      v12 = 2 * (v17 + 1);
      if ( !is_mul_ok(v17 + 1, 2uLL) )
        v12 = -1LL;
      v13 = (WCHAR *)operator new[](v12, 0x4B677844u, 256LL, v10);
      v4 = v13;
      if ( v13 )
      {
        v14 = v11;
        memmove(v13, a1, v14 * 2);
        v4[v14] = 0;
        if ( Handle
          && (Object = 0LL,
              v15 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL),
              v5 = (struct _KEVENT *)Object,
              v15 < 0) )
        {
          v8 = -2147483640;
          WdLogSingleEntry1(2LL, Handle);
          WdLogGlobalForLineNumber = 9751;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
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
        WdLogGlobalForLineNumber = 9719;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
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
      WdLogGlobalForLineNumber = 9708;
    }
  }
  else
  {
    v8 = -2147483643;
    WdLogSingleEntry1(3LL, -2147483643LL);
    WdLogGlobalForLineNumber = 9684;
  }
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  return v8;
}
