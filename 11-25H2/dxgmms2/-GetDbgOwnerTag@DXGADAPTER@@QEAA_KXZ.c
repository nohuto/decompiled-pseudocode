/*
 * XREFs of ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x14004F24C
 * Callers:
 *     VidSchiResetEngine @ 0x140044808 (VidSchiResetEngine.c)
 *     VidSchiReportHwHang @ 0x140046CF8 (VidSchiReportHwHang.c)
 *     VidSchiResetHwEngine @ 0x140052D48 (VidSchiResetHwEngine.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DXGADAPTER::GetDbgOwnerTag(DXGADAPTER *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 75);
  if ( !result )
  {
    result = *((_QWORD *)this + 214);
    if ( !result )
      return *((_QWORD *)this + 57);
  }
  return result;
}
