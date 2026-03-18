/*
 * XREFs of EtwpComputeRegEntryEnableInfo @ 0x14089B4A0
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x14079E660 (SendCaptureStateNotificationsWorker.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpCalculateUpdateNotification @ 0x14089B0D4 (EtwpCalculateUpdateNotification.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpRegisterKMProvider @ 0x1408B74C4 (EtwpRegisterKMProvider.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1409E471C (EtwpClearSessionAndUnreferenceEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpComputeRegEntryEnableInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // esi
  __int64 v4; // r11
  int v6; // eax
  int v7; // r14d
  __int64 v8; // r13
  int v9; // r15d
  int v11; // edi
  __int64 v12; // rbp
  int v13; // r9d
  _QWORD *v14; // r8
  unsigned int i; // edx
  unsigned int v16; // eax
  char *v17; // r8
  __int64 result; // rax
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // cl
  unsigned int v21; // r8d
  _QWORD *v22; // rdx
  unsigned __int8 v23; // cl
  char *v24; // rdx
  unsigned __int8 v25; // cl

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 40);
  v6 = *(unsigned __int8 *)(a1 + 100);
  v7 = *(unsigned __int8 *)(a1 + 102);
  v8 = *(_QWORD *)(v2 + 400);
  v9 = *(unsigned __int8 *)(a1 + 103);
  v11 = *(unsigned __int8 *)(a1 + 101);
  if ( v4 )
    v12 = *(_QWORD *)(v4 + 400);
  else
    v12 = 0LL;
  *(_QWORD *)a2 = 0LL;
  v13 = v6;
  *(_QWORD *)(a2 + 8) = 0LL;
  v14 = (_QWORD *)(v2 + 144);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = -1LL;
  for ( i = 0; i < 8; ++i )
  {
    if ( _bittest(&v13, (unsigned __int8)i) )
    {
      v20 = *(_BYTE *)(a2 + 4);
      *(_DWORD *)a2 = 1;
      if ( v20 <= *((_BYTE *)v14 - 12) )
        v20 = *((_BYTE *)v14 - 12);
      *(_BYTE *)(a2 + 4) = v20;
      *(_QWORD *)(a2 + 16) |= *v14;
      *(_QWORD *)(a2 + 24) &= v14[1];
      *(_DWORD *)(a2 + 8) |= *((_DWORD *)v14 - 2);
    }
    v14 += 4;
  }
  if ( (_BYTE)v11 )
  {
    v16 = 0;
    v17 = (char *)(v4 + 132);
    do
    {
      if ( _bittest(&v11, (unsigned __int8)v16) && *((_DWORD *)v17 - 1) )
      {
        v19 = *(_BYTE *)(a2 + 4);
        *(_DWORD *)a2 = 1;
        if ( v19 <= (unsigned __int8)*v17 )
          v19 = *v17;
        *(_BYTE *)(a2 + 4) = v19;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v17 + 12);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v17 + 20);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v17 + 1);
      }
      ++v16;
      v17 += 32;
    }
    while ( v16 < 8 );
  }
  result = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(result + 400) )
  {
    if ( (_BYTE)v7 )
    {
      v21 = 0;
      v22 = (_QWORD *)(v8 + 144);
      do
      {
        result = (unsigned __int8)v21;
        if ( _bittest(&v7, (unsigned __int8)v21) )
        {
          v23 = *(_BYTE *)(a2 + 4);
          *(_DWORD *)a2 = 1;
          if ( v23 <= *((_BYTE *)v22 - 12) )
            v23 = *((_BYTE *)v22 - 12);
          *(_BYTE *)(a2 + 4) = v23;
          *(_QWORD *)(a2 + 16) |= *v22;
          *(_QWORD *)(a2 + 24) &= v22[1];
          result = *((unsigned int *)v22 - 2);
          *(_DWORD *)(a2 + 8) |= result;
        }
        ++v21;
        v22 += 4;
      }
      while ( v21 < 8 );
    }
    if ( (_BYTE)v9 )
    {
      v24 = (char *)(v12 + 132);
      do
      {
        result = (unsigned __int8)v3;
        if ( _bittest(&v9, (unsigned __int8)v3) && *((_DWORD *)v24 - 1) )
        {
          v25 = *(_BYTE *)(a2 + 4);
          *(_DWORD *)a2 = 1;
          if ( v25 <= (unsigned __int8)*v24 )
            v25 = *v24;
          *(_BYTE *)(a2 + 4) = v25;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v24 + 12);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v24 + 20);
          result = *((unsigned int *)v24 + 1);
          *(_DWORD *)(a2 + 8) |= result;
        }
        ++v3;
        v24 += 32;
      }
      while ( v3 < 8 );
    }
  }
  return result;
}
