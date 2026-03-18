/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1401AE6D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140043874 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x14006A918 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x14024C848 (DxgkMiracastQueryMiracastStatus.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(unsigned __int16 *a1, void *a2)
{
  struct DXGPROCESS *Current; // rax
  NTSTATUS v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  char *v8; // rax
  char *v9; // r14
  size_t v10; // rbx
  int Src; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  void *v14; // [rsp+60h] [rbp-28h]
  unsigned int v15; // [rsp+A0h] [rbp+18h] BYREF
  int v16; // [rsp+A8h] [rbp+20h]

  v13 = 0LL;
  v14 = 0LL;
  Src = 0;
  v15 = 0;
  Current = DXGPROCESS::GetCurrent();
  v16 = DxgkNetDispAccessCheck(Current);
  if ( v16 >= 0 )
  {
    v13 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = RtlStringCchLengthW(a1, 0x208uLL, &v13);
    v16 = v5;
    if ( v5 >= 0 )
    {
      v6 = v13;
      v7 = 2 * (v13 + 1);
      if ( !is_mul_ok(v13 + 1, 2uLL) )
        v7 = -1LL;
      v8 = (char *)operator new[](v7, 0x4B677844u, 256LL);
      v9 = v8;
      v14 = v8;
      if ( v8 )
      {
        v10 = 2 * v6;
        memmove(v8, a1, v10);
        *(_WORD *)&v9[v10] = 0;
        v16 = DxgkMiracastQueryMiracastStatus(v9, &Src, &v15);
        if ( v16 >= 0 )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(a2, &Src, 4uLL);
        }
      }
      else
      {
        v15 = -2147483638;
        WdLogSingleEntry1(6LL, -2147483638LL);
        WdLogGlobalForLineNumber = 9901;
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
      v15 = -2147483640;
      WdLogSingleEntry1(3LL, v5);
      WdLogGlobalForLineNumber = 9890;
    }
  }
  else
  {
    v15 = -2147483643;
    WdLogSingleEntry1(3LL, -2147483643LL);
    WdLogGlobalForLineNumber = 9866;
  }
  if ( v14 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
  return v15;
}
