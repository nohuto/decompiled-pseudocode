/*
 * XREFs of RtlGetExtendedContextLength @ 0x180074950
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800C73DC (PsspCaptureThreadInformation.c)
 *     PsspInitializeContextOrExtendedContext @ 0x1800C7AF8 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x180075A00 (RtlpGetEntireXStateAreaLength.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(int a1, _DWORD *a2)
{
  int v3; // r11d
  int v4; // edi
  int v5; // ebp
  unsigned int v6; // ebx
  bool v7; // dl
  int v8; // r14d
  __int64 v9; // r9
  int v10; // edx
  int v11; // r8d
  int v12; // r10d
  bool v13; // dl
  char v14; // r10
  int v15; // eax
  int v16; // r8d
  int v17; // edx
  int v18; // eax
  int v19; // edi
  __int64 v20; // r9
  int EntireXStateAreaLength; // eax

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x7FFFF20) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFFC0) != 0x400000 )
  {
    return (unsigned int)-1073741811;
  }
  v3 = a1 & 0x10040;
  v4 = a1 & 0x100040;
  v5 = a1 & 0x400020;
  v6 = 0;
  v7 = 0;
  if ( (a1 & 0x400020) != 0x400020 )
    v7 = (a1 & 0x10040) != 65600 && (a1 & 0x100040) != 1048640;
  if ( v7 )
  {
    v8 = 0;
  }
  else
  {
    if ( !MEMORY[0x7FFE03D8] )
      return (unsigned int)-1073741637;
    v8 = 2;
    v3 = a1 & 0x10040;
    v4 = a1 & 0x100040;
    v5 = a1 & 0x400020;
  }
  if ( (a1 & 0x100080) == 0x100080 )
    return (unsigned int)-1073741637;
  v9 = 0LL;
  v10 = v3;
  v11 = v4;
  v12 = v5;
  if ( v8 )
  {
    v9 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    v10 = a1 & 0x10040;
    v11 = a1 & 0x100040;
    v12 = a1 & 0x400020;
  }
  if ( (a1 & 0x27FFFF80) != 0x10000 && (a1 & 0x7FFFF20) != 0x100000 )
  {
    v3 = v10;
    v4 = v11;
    v5 = v12;
    if ( (a1 & 0x7FFFFF0) != 0x200000 && (a1 & 0x7FFFFC0) != 0x400000 )
      return (unsigned int)-1073741811;
  }
  v13 = 0;
  v14 = 1;
  if ( v5 != 4194336 )
    v13 = v3 != 65600 && v4 != 1048640;
  if ( !v13 )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v14 = 3;
      goto LABEL_19;
    }
    return (unsigned int)-1073741637;
  }
LABEL_19:
  v15 = 0;
  v16 = 0;
  v17 = a1 & 0x10000;
  if ( (a1 & 0x10000) != 0 )
  {
    v15 = 716;
    v16 = 4;
  }
  else
  {
    if ( (a1 & 0x100000) != 0 )
    {
      v15 = 1232;
    }
    else
    {
      if ( (a1 & 0x200000) != 0 )
      {
        v15 = 416;
        v16 = 8;
        goto LABEL_21;
      }
      if ( (a1 & 0x400000) == 0 )
        goto LABEL_21;
      v15 = 912;
      v17 = a1 & 0x10000;
    }
    v16 = 16;
  }
LABEL_21:
  v18 = v15 + 32;
  if ( (v14 & 2) != 0 )
  {
    v19 = -v16 & (v16 + v18 - 1);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
    {
      v20 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & v9;
      if ( v17 )
      {
        v9 = v20 & 0x40000000000009FFLL;
      }
      else if ( (a1 & 0x100000) != 0 )
      {
        v9 = v20 & 0x4000000000060DFFLL;
      }
      else if ( (a1 & 0x400000) != 0 )
      {
        v9 = v20 & 4;
      }
      else
      {
        v9 = 0LL;
      }
    }
    EntireXStateAreaLength = RtlpGetEntireXStateAreaLength(v9);
    v18 = v19 - v16 + EntireXStateAreaLength - 448;
  }
  *a2 = v16 + v18 - 1;
  return v6;
}
