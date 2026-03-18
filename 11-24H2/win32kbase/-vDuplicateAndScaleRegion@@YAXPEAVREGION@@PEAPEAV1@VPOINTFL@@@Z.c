/*
 * XREFs of ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x14003D278
 * Callers:
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x14003D180 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C33D0 (-vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 * Callees:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140025B10 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x14002B9D0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x14003CE00 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall vDuplicateAndScaleRegion(__int64 a1, __int64 *a2, struct REGION_CORE *a3)
{
  __int64 v3; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a2;
  v6 = *a2;
  v8 = a1;
  if ( a1 )
  {
    if ( v3 )
      goto LABEL_14;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v7);
    if ( v7 )
    {
      v3 = v7;
      v6 = v7;
      *a2 = v7;
    }
    if ( v3 )
    {
LABEL_14:
      if ( RGNOBJ::bCopy((RGNOBJ *)&v6, (struct RGNOBJ *)&v8) )
      {
        RGNOBJ::vScale(&v6, a3);
        *a2 = v6;
        return;
      }
LABEL_7:
      RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v6);
      *a2 = 0LL;
    }
  }
  else if ( v3 )
  {
    goto LABEL_7;
  }
}
