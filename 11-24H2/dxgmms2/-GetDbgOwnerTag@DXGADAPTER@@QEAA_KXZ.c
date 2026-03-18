/*
 * XREFs of ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x14004EBDC
 * Callers:
 *     VidSchiReportHwHang @ 0x140044F38 (VidSchiReportHwHang.c)
 *     VidSchiResetEngine @ 0x140047318 (VidSchiResetEngine.c)
 *     VidSchiResetHwEngine @ 0x140052878 (VidSchiResetHwEngine.c)
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
