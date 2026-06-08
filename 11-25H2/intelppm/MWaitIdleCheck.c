/*
 * XREFs of MWaitIdleCheck @ 0x140008200
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x140001A70 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x140002350 (ReadGenAddr.c)
 */

__int64 __fastcall MWaitIdleCheck(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int8 GenAddr; // r10
  unsigned __int8 v3; // al

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 2) != 0 )
  {
    GenAddr = ReadGenAddr((unsigned __int8 *)&dword_140019AF4);
    v3 = 0;
    if ( qword_140019B04 )
      v3 = ReadGenAddr((unsigned __int8 *)&dword_140019B00);
    if ( ((GenAddr | v3) & 0x10) != 0 )
    {
      WriteGenAddr(&dword_140019AF4, 16LL);
      if ( qword_140019B04 )
        WriteGenAddr(&dword_140019B00, 16LL);
      return (unsigned int)-1073741823;
    }
  }
  return v1;
}
