/*
 * XREFs of AccelpSiovIaaQueryCompletionInformation @ 0x140664F20
 * Callers:
 *     AccelpSiovIaaOperationHandler @ 0x140664C80 (AccelpSiovIaaOperationHandler.c)
 *     AccelpSiovIaaQueryCompletionInformation @ 0x140664F20 (AccelpSiovIaaQueryCompletionInformation.c)
 * Callees:
 *     AccelpSiovIaaQueryCompletionInformation @ 0x140664F20 (AccelpSiovIaaQueryCompletionInformation.c)
 *     IaaGetStatusFromCompletionRecord @ 0x140665764 (IaaGetStatusFromCompletionRecord.c)
 */

__int64 __fastcall AccelpSiovIaaQueryCompletionInformation(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int StatusFromCompletionRecord; // ebx
  char v14; // al
  unsigned __int8 v15; // cl
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  int v20; // eax
  unsigned int i; // r14d

  v5 = a4;
  v8 = (unsigned int)(a3 - 1);
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        StatusFromCompletionRecord = 0;
        if ( !*(_DWORD *)(a5 + 24) || *(_QWORD *)(a5 + 16) )
        {
          v16 = *(_OWORD **)(a5 + 16);
          if ( (unsigned int)a4 >= 0x400 )
          {
            if ( *(_BYTE *)(a1 + 7) != 67 )
              return (unsigned int)-1073741637;
            v17 = 8LL;
            v18 = (_OWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
            do
            {
              *v16 = *v18;
              v16[1] = v18[1];
              v16[2] = v18[2];
              v16[3] = v18[3];
              v16[4] = v18[4];
              v16[5] = v18[5];
              v16[6] = v18[6];
              v16 += 8;
              v19 = v18[7];
              v18 += 8;
              *(v16 - 1) = v19;
              --v17;
            }
            while ( v17 );
          }
          else
          {
            StatusFromCompletionRecord = -1073741789;
          }
          *(_DWORD *)(a5 + 24) = 1024;
          return StatusFromCompletionRecord;
        }
        return (unsigned int)-1073741811;
      }
      v11 = (unsigned int)(v10 - 1);
      if ( (_DWORD)v11 )
      {
        v12 = (unsigned int)(v11 - 1);
        if ( (_DWORD)v12 )
        {
          if ( (_DWORD)v12 != 1 )
            return (unsigned int)-1073741637;
          v14 = *(_BYTE *)(a1 + 7);
          if ( (v14 & 0xFC) != 0 || v14 == 1 )
          {
            StatusFromCompletionRecord = IaaGetStatusFromCompletionRecord(a2, a2, v12, a4);
            if ( (int)(StatusFromCompletionRecord + 0x80000000) < 0 || StatusFromCompletionRecord == -1073741789 )
              *(_DWORD *)(a5 + 12) = *(_DWORD *)(a2 + 24);
            return StatusFromCompletionRecord;
          }
          return (unsigned int)-1073741811;
        }
        if ( (*(_BYTE *)(a1 + 7) & 0xFD) == 0 )
          return (unsigned int)-1073741811;
        StatusFromCompletionRecord = IaaGetStatusFromCompletionRecord(a2, a2, v12, a4);
        if ( (int)(StatusFromCompletionRecord + 0x80000000) < 0 || StatusFromCompletionRecord == -1073741789 )
          *(_BYTE *)(a5 + 8) = *(_BYTE *)(a2 + 28);
      }
      else
      {
        v15 = *(_BYTE *)(a1 + 7);
        if ( (unsigned __int8)(v15 - 4) > 0x3Fu && v15 != 1 && v15 < 0x45u )
          return (unsigned int)-1073741811;
        StatusFromCompletionRecord = IaaGetStatusFromCompletionRecord(a2, a2, v11, a4);
        if ( (int)(StatusFromCompletionRecord + 0x80000000) < 0 || StatusFromCompletionRecord == -1073741789 )
          *(_DWORD *)(a5 + 4) = *(_DWORD *)(a2 + 32);
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 7) != 66 )
        return (unsigned int)-1073741811;
      StatusFromCompletionRecord = IaaGetStatusFromCompletionRecord(a2, a2, v9, a4);
      if ( (int)(StatusFromCompletionRecord + 0x80000000) < 0 || StatusFromCompletionRecord == -1073741789 )
      {
        StatusFromCompletionRecord = 0;
        *(_DWORD *)a5 = *(_DWORD *)(a2 + 4);
      }
    }
  }
  else
  {
    v20 = IaaGetStatusFromCompletionRecord(a2, a2, v8, a4);
    if ( v20 >= 0 || v20 == -1073741789 )
    {
      for ( i = 1; i < 7; ++i )
      {
        if ( i != 1 )
          AccelpSiovIaaQueryCompletionInformation(a1, a2, i, v5, a5);
      }
      return 0;
    }
    return (unsigned int)v20;
  }
  return StatusFromCompletionRecord;
}
