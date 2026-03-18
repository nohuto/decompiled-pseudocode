/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1401AC1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140043C04 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x14006ACEC (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x140245A38 (DxgkMiracastQueryMiracastStatus.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(unsigned __int16 *a1, void *a2)
{
  struct DXGPROCESS *Current; // rax
  NTSTATUS v5; // eax
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  char *v9; // rax
  char *v10; // r14
  size_t v11; // rbx
  int Src; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-30h] BYREF
  void *v15; // [rsp+60h] [rbp-28h]
  unsigned int v16; // [rsp+A0h] [rbp+18h] BYREF
  int v17; // [rsp+A8h] [rbp+20h]

  v14 = 0LL;
  v15 = 0LL;
  Src = 0;
  v16 = 0;
  Current = DXGPROCESS::GetCurrent();
  v17 = DxgkNetDispAccessCheck(Current);
  if ( v17 >= 0 )
  {
    v14 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = RtlStringCchLengthW(a1, 0x208uLL, &v14);
    v17 = v5;
    if ( v5 >= 0 )
    {
      v7 = v14;
      v8 = 2 * (v14 + 1);
      if ( !is_mul_ok(v14 + 1, 2uLL) )
        v8 = -1LL;
      v9 = (char *)operator new[](v8, 0x4B677844u, 256LL, v6);
      v10 = v9;
      v15 = v9;
      if ( v9 )
      {
        v11 = 2 * v7;
        memmove(v9, a1, v11);
        *(_WORD *)&v10[v11] = 0;
        v17 = DxgkMiracastQueryMiracastStatus(v10, &Src, &v16);
        if ( v17 >= 0 )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(a2, &Src, 4uLL);
        }
      }
      else
      {
        v16 = -2147483638;
        WdLogSingleEntry1(6LL, -2147483638LL);
        WdLogGlobalForLineNumber = 9840;
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
      v16 = -2147483640;
      WdLogSingleEntry1(3LL, v5);
      WdLogGlobalForLineNumber = 9829;
    }
  }
  else
  {
    v16 = -2147483643;
    WdLogSingleEntry1(3LL, -2147483643LL);
    WdLogGlobalForLineNumber = 9805;
  }
  if ( v15 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
  return v16;
}
