/*
 * XREFs of ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1401AA1FC
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CF118 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CFC34 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400CFC10 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x14031F46C (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 */

void __fastcall REGION_CORE::set_sizeScan(REGION_CORE *this, struct REGION_CORE *a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // r8d
  unsigned __int64 v5; // rcx

  v2 = (unsigned int)a2;
  if ( IsBaseRustExportsEnabled<1>() )
  {
    Win32kRS::RegionCore_set_sizeScan(this, (struct REGION_CORE *)(unsigned int)v2, v4);
  }
  else
  {
    v5 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 2) = v2;
    if ( v5 < v2 )
    {
      *((_QWORD *)this + 2) = v5;
      RgnCaptureLiveMemoryDumpOnInvalidSizedScan();
    }
  }
}
