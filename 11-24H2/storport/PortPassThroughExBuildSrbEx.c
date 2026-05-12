/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1401B411C
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1401B5774 (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x140143780 (memmove.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(IRP *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // r13
  int v8; // r12d
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // r14d
  unsigned int v12; // ecx
  unsigned int v13; // ebp
  int v14; // r15d
  _DWORD *Pool2; // rsi
  char v16; // al
  unsigned int v17; // ecx
  char v18; // dl
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  char *v23; // rcx
  char *v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  char *v27; // rcx
  __int64 v28; // rax
  __int64 v31; // [rsp+78h] [rbp+10h]
  int v34; // [rsp+90h] [rbp+28h]

  v7 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v8 = 136;
    v34 = 152;
    v31 = 34LL;
    v9 = 176;
  }
  else
  {
    v9 = 144;
    v31 = 32LL;
    v34 = 144;
    v8 = 128;
  }
  v10 = *(_DWORD *)(a2 + 8);
  if ( v10 > 0x10 )
  {
    if ( v10 > 0x20 )
    {
      v12 = v10 + 39;
      if ( v12 < 0x28 )
        return 0LL;
      v11 = ((v12 - 1) & 0xFFFFFFF8) + 8;
    }
    else
    {
      v11 = 56;
    }
  }
  else
  {
    v11 = 40;
  }
  v13 = v9 + v11;
  if ( v9 + v11 < v9 )
    return 0LL;
  v14 = 0;
  if ( a6 )
  {
    if ( v13 + 32 >= v13 )
    {
      v13 += 32;
      goto LABEL_16;
    }
    return 0LL;
  }
LABEL_16:
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v13, 1766878288LL);
  if ( Pool2 )
  {
    if ( *(_BYTE *)(a2 + 17) )
    {
      v7 = ExAllocatePool2(72LL, *(unsigned __int8 *)(a2 + 17), 1766878288LL);
      if ( !v7 )
      {
        ExFreePoolWithTag(Pool2, 0x69506C50u);
        Pool2 = 0LL;
        v14 = -1073741670;
      }
    }
    if ( v14 >= 0 )
    {
      Pool2[5] = 0;
      Pool2[3] = 1;
      *Pool2 = 2621448;
      Pool2[2] = 1397899864;
      Pool2[4] = v13;
      v16 = *(_BYTE *)(a2 + 18);
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          Pool2[6] = 64;
        }
        else if ( v16 == 3 )
        {
          Pool2[6] = 192;
        }
      }
      else
      {
        Pool2[6] = 128;
      }
      if ( !v7 )
        Pool2[6] |= 0x20u;
      Pool2[6] |= 0x2000100u;
      *((_WORD *)Pool2 + 18) = IoGetIoPriorityHint(a1);
      Pool2[10] = *(_DWORD *)(a2 + 20);
      v17 = (v8 != 128) + 1;
      Pool2[13] = v8;
      Pool2[14] = v17;
      if ( a6 )
      {
        v17 = (v8 != 128) + 2;
        Pool2[14] = v17;
      }
      v18 = *(_BYTE *)(a2 + 18);
      if ( v18 == 1 )
        v19 = *(_DWORD *)(a2 + 36);
      else
        v19 = *(_DWORD *)(a2 + 32);
      Pool2[15] = v19;
      v20 = a4;
      if ( v18 != 1 )
        v20 = a3;
      *((_QWORD *)Pool2 + 8) = v20;
      *((_QWORD *)Pool2 + 10) = a1;
      Pool2[30] = v34;
      if ( v17 >= 2 )
      {
        Pool2[31] = v11 + v34;
        if ( v17 == 3 )
          Pool2[32] = v11 + v34 + 24;
      }
      *(_OWORD *)&Pool2[v31] = *(_OWORD *)((char *)&a1->AssociatedIrp.MasterIrp->Type + *(unsigned int *)(a2 + 24));
      v21 = *(_DWORD *)(a2 + 8);
      v22 = (unsigned int)Pool2[30];
      if ( v21 > 0x10 )
      {
        if ( v21 > 0x20 )
        {
          *(_DWORD *)((char *)Pool2 + v22) = 66;
          v26 = *(_DWORD *)(a2 + 8) + 24;
          *((_BYTE *)Pool2 + v22 + 8) = 0;
          *(_DWORD *)((char *)Pool2 + v22 + 4) = v26;
          *((_BYTE *)Pool2 + v22 + 9) = *(_BYTE *)(a2 + 17);
          *(_DWORD *)((char *)Pool2 + v22 + 12) = *(_DWORD *)(a2 + 8);
          *(_QWORD *)((char *)Pool2 + v22 + 24) = v7;
          v25 = v22 + 32;
        }
        else
        {
          *(_DWORD *)((char *)Pool2 + v22) = 65;
          *(_DWORD *)((char *)Pool2 + v22 + 4) = 48;
          *((_BYTE *)Pool2 + v22 + 8) = 0;
          *((_BYTE *)Pool2 + v22 + 9) = *(_BYTE *)(a2 + 17);
          *((_BYTE *)Pool2 + v22 + 10) = *(_BYTE *)(a2 + 8);
          *(_QWORD *)((char *)Pool2 + v22 + 16) = v7;
          v25 = v22 + 24;
        }
        v24 = (char *)Pool2 + v25;
      }
      else
      {
        v23 = (char *)Pool2 + v22;
        *(_DWORD *)v23 = 64;
        *((_DWORD *)v23 + 1) = 32;
        v23[8] = 0;
        v23[9] = *(_BYTE *)(a2 + 17);
        v23[10] = *(_BYTE *)(a2 + 8);
        *((_QWORD *)v23 + 2) = v7;
        v24 = v23 + 24;
      }
      memmove(v24, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
      if ( Pool2[14] >= 2u )
      {
        v27 = (char *)Pool2 + (unsigned int)Pool2[31];
        *(_DWORD *)v27 = 1;
        *((_DWORD *)v27 + 1) = 16;
        *((_DWORD *)v27 + 2) = *(_DWORD *)(a2 + 36);
        *((_QWORD *)v27 + 2) = a4;
      }
      if ( Pool2[14] == 3 )
      {
        v28 = (unsigned int)Pool2[32];
        *(_DWORD *)((char *)Pool2 + v28) = 160;
        *(_DWORD *)((char *)Pool2 + v28 + 4) = 24;
        *(_QWORD *)((char *)Pool2 + v28 + 8) = a6;
      }
    }
  }
  return Pool2;
}
