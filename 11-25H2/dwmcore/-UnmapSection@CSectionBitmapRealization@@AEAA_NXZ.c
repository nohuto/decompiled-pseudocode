/*
 * XREFs of ?UnmapSection@CSectionBitmapRealization@@AEAA_NXZ @ 0x1801FA7E4
 * Callers:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1801FA74C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CSectionBitmapRealization::UnmapSection(CSectionBitmapRealization *this)
{
  char v1; // bl
  void *v3; // rsi
  HANDLE CurrentProcess; // rax

  v1 = 0;
  if ( *((_BYTE *)this + 384) )
  {
    v3 = (void *)*((_QWORD *)this + 47);
    if ( v3 )
    {
      CurrentProcess = GetCurrentProcess();
      NtUnmapViewOfSection(CurrentProcess, v3);
      *((_QWORD *)this + 47) = 0LL;
      return 1;
    }
  }
  return v1;
}
