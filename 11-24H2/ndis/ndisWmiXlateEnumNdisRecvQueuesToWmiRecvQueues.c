/*
 * XREFs of ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1400B01D8
 * Callers:
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x140030A20 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues(
        _DWORD *a1,
        size_t Size,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned int v7; // eax
  size_t v8; // rbp
  _DWORD *Pool2; // rax
  _DWORD *v10; // rbx
  unsigned int v11; // r9d
  char *v12; // r8
  char *v13; // rdx
  _OWORD *v14; // rcx
  __int64 v15; // r10
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int64 v18; // r10
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm1

  v4 = 0;
  v7 = 1088 * a1[2] + 16;
  *a4 = v7;
  if ( v7 <= a3 )
  {
    v8 = (unsigned int)Size;
    Pool2 = (_DWORD *)ExAllocatePool2(66LL, (unsigned int)Size, 829899854LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, a1, v8);
      memset(a1, 0, *a4);
      v11 = 0;
      v12 = (char *)v10 + (unsigned int)v10[1];
      *(_OWORD *)a1 = *(_OWORD *)v10;
      v13 = (char *)a1 + (unsigned int)a1[1];
      for ( a1[3] = 1088; v11 < v10[2]; v13 += (unsigned int)a1[3] )
      {
        v14 = v13 + 52;
        *(_DWORD *)v13 = *(_DWORD *)v12;
        v15 = 4LL;
        *((_WORD *)v13 + 1) = 1084;
        *((_DWORD *)v13 + 1) = *((_DWORD *)v12 + 1);
        *((_DWORD *)v13 + 2) = *((_DWORD *)v12 + 2);
        *((_DWORD *)v13 + 3) = *((_DWORD *)v12 + 3);
        *((_DWORD *)v13 + 4) = *((_DWORD *)v12 + 4);
        *((_DWORD *)v13 + 5) = *((_DWORD *)v12 + 5);
        *((_QWORD *)v13 + 3) = *((_QWORD *)v12 + 3);
        *((_WORD *)v13 + 16) = *((_WORD *)v12 + 16);
        *((_WORD *)v13 + 17) = *((_WORD *)v12 + 17);
        *((_WORD *)v13 + 18) = *((_WORD *)v12 + 18);
        *((_WORD *)v13 + 19) = *((_WORD *)v12 + 19);
        *((_DWORD *)v13 + 10) = *((_DWORD *)v12 + 10);
        *((_DWORD *)v13 + 11) = *((_DWORD *)v12 + 11);
        *((_DWORD *)v13 + 12) = *((_DWORD *)v12 + 12);
        v16 = v12 + 52;
        do
        {
          *v14 = *v16;
          v14[1] = v16[1];
          v14[2] = v16[2];
          v14[3] = v16[3];
          v14[4] = v16[4];
          v14[5] = v16[5];
          v14[6] = v16[6];
          v14 += 8;
          v17 = v16[7];
          v16 += 8;
          *(v14 - 1) = v17;
          --v15;
        }
        while ( v15 );
        v18 = 4LL;
        *(_DWORD *)v14 = *(_DWORD *)v16;
        v19 = v13 + 568;
        v20 = v12 + 568;
        do
        {
          *v19 = *v20;
          v19[1] = v20[1];
          v19[2] = v20[2];
          v19[3] = v20[3];
          v19[4] = v20[4];
          v19[5] = v20[5];
          v19[6] = v20[6];
          v19 += 8;
          v21 = v20[7];
          v20 += 8;
          *(v19 - 1) = v21;
          --v18;
        }
        while ( v18 );
        ++v11;
        *(_DWORD *)v19 = *(_DWORD *)v20;
        v12 += (unsigned int)v10[3];
      }
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073676268;
  }
  return v4;
}
