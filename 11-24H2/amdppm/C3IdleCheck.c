/*
 * XREFs of C3IdleCheck @ 0x140006230
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x14000297C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x140003F3C (WriteGenAddr.c)
 */

__int64 __fastcall C3IdleCheck(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int8 GenAddr; // r10
  unsigned __int8 v7; // al

  v3 = 0;
  GenAddr = ReadGenAddr((__int64)&dword_140015574, a2, a3);
  v7 = 0;
  if ( qword_140015584 )
    v7 = ReadGenAddr((__int64)&dword_140015580, v4, v5);
  if ( ((GenAddr | v7) & 0x10) != 0 )
  {
    WriteGenAddr((unsigned __int8 *)&dword_140015574, 0x10uLL);
    if ( qword_140015584 )
      WriteGenAddr((unsigned __int8 *)&dword_140015580, 0x10uLL);
    return (unsigned int)-1073741823;
  }
  return v3;
}
