/*
 * XREFs of ?IsConnectedToRightSubmix@CStreamInstance@@UEAA_NXZ @ 0x140045000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CStreamInstance::IsConnectedToRightSubmix(CStreamInstance *this)
{
  return *((_QWORD *)this + 13) != 0LL;
}
