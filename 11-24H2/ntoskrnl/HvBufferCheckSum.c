/*
 * XREFs of HvBufferCheckSum @ 0x140A02614
 * Callers:
 *     CmpVerifyLogRecord @ 0x1407E12B8 (CmpVerifyLogRecord.c)
 *     CmLogTmRmAction @ 0x140A015A0 (CmLogTmRmAction.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvBufferCheckSum(__int64 a1, unsigned int a2)
{
  int v2; // r9d
  __int64 v3; // r10
  unsigned int v4; // edx
  int v5; // r8d
  unsigned __int8 *v6; // r11
  _DWORD *v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r8d

  v2 = 0;
  v3 = a2 >> 2;
  v4 = a2 & 3;
  v5 = 0;
  v6 = (unsigned __int8 *)(a1 + 4 * v3);
  if ( (unsigned int)v3 > 1 )
  {
    v7 = (_DWORD *)(a1 + 4);
    v8 = (unsigned int)(v3 - 1);
    do
    {
      v5 ^= *v7++;
      --v8;
    }
    while ( v8 );
  }
  if ( v4 )
  {
    v9 = v4;
    do
    {
      v10 = *v6++;
      v2 = v10 + (v2 << 8);
      --v9;
    }
    while ( v9 );
  }
  v11 = v2 ^ v5;
  if ( v11 == -1 )
  {
    return (unsigned int)-2;
  }
  else if ( !v11 )
  {
    return 1;
  }
  return v11;
}
