/*
 * XREFs of ?SetReverseAlignment@CDWriteText@@UEAAX_N@Z @ 0x180020FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDWriteText::SetReverseAlignment(CDWriteText *this, char a2)
{
  if ( *((_BYTE *)this + 257) != a2 )
  {
    *((_BYTE *)this + 257) = a2;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 34) + 24LL))((char *)this - 272, 4096LL);
  }
}
