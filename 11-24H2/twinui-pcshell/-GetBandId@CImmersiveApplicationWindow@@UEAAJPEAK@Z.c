/*
 * XREFs of ?GetBandId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x180307D60
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall CImmersiveApplicationWindow::GetBandId(CImmersiveApplicationWindow *this, unsigned int *a2)
{
  __int64 v3; // rcx
  signed int result; // eax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = *((_QWORD *)this + 2);
  v5 = 0;
  if ( (unsigned int)GetWindowBand(v3, &v5) )
  {
    result = 0;
  }
  else
  {
    result = ResultFromKnownLastError();
    if ( result < 0 )
      return result;
  }
  *a2 = v5;
  return result;
}
