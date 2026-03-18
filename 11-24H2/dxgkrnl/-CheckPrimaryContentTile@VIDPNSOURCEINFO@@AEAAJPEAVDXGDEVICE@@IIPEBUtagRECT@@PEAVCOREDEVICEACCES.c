/*
 * XREFs of ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1402A9884
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401BF068 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401DCBEC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402A8BD4 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentTile(
        VIDPNSOURCEINFO *this,
        struct DXGDEVICE *a2,
        D3DKMT_HANDLE a3,
        unsigned int a4,
        const struct tagRECT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  __int64 v9; // rsi
  __int64 result; // rax
  unsigned int v11; // ebx
  char *pData; // rdx
  __int64 v13; // r11
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  char *v16; // r10
  char *i; // r9
  unsigned int v18; // eax
  struct _D3DKMT_UNLOCK v19; // [rsp+20h] [rbp-58h] BYREF
  struct _D3DKMT_LOCK v20; // [rsp+30h] [rbp-48h] BYREF

  *(_OWORD *)&v20.hDevice = 0LL;
  v20.hAllocation = a3;
  *a7 = 0;
  *a8 = 0;
  v9 = a4;
  memset(&v20.pPages, 0, 32);
  result = DXGDEVICE::Lock(a2, &v20, a6, 0);
  v11 = result;
  if ( (int)result >= 0 )
  {
    pData = (char *)v20.pData;
    v13 = (unsigned int)(a5->right - a5->left);
    v14 = v13 * (a5->bottom - a5->top);
    v15 = 0;
    while ( pData < (char *)v20.pData + (unsigned int)(v9 * (a5->bottom - a5->top)) )
    {
      v16 = &pData[4 * v13];
      for ( i = pData; i < v16; v15 = v18 )
      {
        v18 = v15 + 1;
        if ( (*(_DWORD *)i & 0xFFFFFF) == 0 )
          v18 = v15;
        i += 4;
      }
      if ( v15 > v14 >> 1 )
      {
        v15 = v13 * (a5->bottom - a5->top);
        break;
      }
      pData += v9;
    }
    v19.hDevice = 0;
    *a7 = v14;
    *a8 = v15;
    v19.phAllocations = &v20.hAllocation;
    v19.NumAllocations = 1;
    DXGDEVICE::Unlock(a2, &v19, 0);
    return v11;
  }
  return result;
}
