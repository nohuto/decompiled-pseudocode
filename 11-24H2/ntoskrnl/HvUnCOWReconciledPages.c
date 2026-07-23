/*
 * XREFs of HvUnCOWReconciledPages @ 0x140427EB0
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x1404281C0 (RtlMergeBitMaps.c)
 *     HvpViewMapUnCOWAndSealRange @ 0x1409683D0 (HvpViewMapUnCOWAndSealRange.c)
 *     HvpViewMapGetStorageLength @ 0x140A68934 (HvpViewMapGetStorageLength.c)
 */

void __fastcall HvUnCOWReconciledPages(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // edx
  struct _KTHREAD *v7; // rcx
  unsigned int v8; // r8d
  _DWORD *v9; // r10
  unsigned int v10; // edi
  _DWORD *v11; // rdx
  int v12; // r9d
  unsigned __int64 v13; // r11
  unsigned int v14; // r9d
  _DWORD *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned __int64 i; // rax
  unsigned int *v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rbp
  unsigned int StorageLength; // esi
  unsigned int v23; // r8d
  __int64 v24; // rdx
  unsigned int v25; // ecx
  unsigned int v26; // r10d
  __int64 v27; // rdi
  unsigned int v28; // r8d
  unsigned __int64 v29; // r11
  _DWORD *v30; // rdx
  int v31; // r9d
  _DWORD *j; // rax
  unsigned int v33; // r9d
  __int64 v34; // rcx
  unsigned __int64 k; // rax
  unsigned int *v36; // rax
  unsigned int v37; // r8d

  if ( (*(_DWORD *)(a1 + 160) & 0x20000) != 0 )
  {
    v2 = a1 + 1736;
    if ( *(struct _KTHREAD **)(a1 + 4192) == KeGetCurrentThread() )
      RtlMergeBitMaps(a1 + 1736, a1 + 1688);
    v3 = *(_DWORD *)v2;
    v4 = 0LL;
    if ( *(_DWORD *)v2 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v2 + 8);
        v6 = *(_DWORD *)(v5 + 4 * v4);
        if ( v3 < 0x20 )
          break;
        *(_DWORD *)(v5 + 4 * v4) = ~v6;
        v4 = (unsigned int)(v4 + 1);
        v3 -= 32;
        if ( !v3 )
          goto LABEL_9;
      }
      *(_DWORD *)(v5 + 4LL * (unsigned int)v4) = v6 ^ ((1 << v3) - 1);
    }
LABEL_9:
    RtlMergeBitMaps(v2, a1 + 88);
    RtlMergeBitMaps(v2, a1 + 112);
    v7 = *(struct _KTHREAD **)(a1 + 4192);
    if ( v7 && v7 != KeGetCurrentThread() )
      RtlMergeBitMaps(v2, a1 + 1688);
    v8 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 )
    {
      v9 = *(_DWORD **)(v2 + 8);
      v10 = 0;
      v11 = v9;
      v12 = *v9;
      v13 = (unsigned __int64)&v9[(unsigned __int64)(v8 - 1) >> 5];
      while ( 1 )
      {
        v14 = ~v12;
        if ( v14 )
          break;
        v15 = v11 + 1;
        v11 = v15;
        if ( (unsigned __int64)v15 > v13 )
          goto LABEL_46;
        v12 = *v15;
      }
      _BitScanForward64((unsigned __int64 *)&v16, v14);
      v17 = v16 + 32 * (v11 - v9);
      if ( v17 > v8 )
      {
LABEL_46:
        v17 = *(_DWORD *)v2;
        goto LABEL_24;
      }
      for ( i = ~(v14 | ((1 << v16) - 1)); ; i = *v19 )
      {
        if ( (_DWORD)i )
        {
          _BitScanForward64(&i, i);
          goto LABEL_21;
        }
        v19 = v11 + 1;
        if ( (unsigned __int64)(v11 + 1) > v13 )
          break;
        ++v11;
      }
      LODWORD(i) = 32;
LABEL_21:
      v20 = i + 32 * (v11 - v9);
      if ( v20 > v8 )
        v20 = *(_DWORD *)v2;
      v10 = v20 - v17;
    }
    else
    {
      v17 = 0;
      v10 = 0;
    }
LABEL_24:
    v21 = a1 + 224;
    StorageLength = HvpViewMapGetStorageLength(a1 + 224);
    if ( v10 )
    {
      while ( 1 )
      {
        v23 = ((v17 << 9) + (v10 << 9)) & 0xFFFFF000;
        v24 = ((v17 << 9) + 4095) & 0xFFFFF000;
        if ( (_DWORD)v24 == v23 )
          goto LABEL_27;
        if ( (unsigned int)v24 < StorageLength )
          break;
        if ( v23 <= StorageLength )
          goto LABEL_54;
LABEL_27:
        v25 = v17 + v10;
        v26 = *(_DWORD *)v2;
        if ( *(_DWORD *)v2 > v17 + v10 )
        {
          v27 = *(_QWORD *)(v2 + 8);
          v28 = 0;
          v29 = v27 + 4 * ((unsigned __int64)(v26 - 1) >> 5);
          v30 = (_DWORD *)(v27 + 4 * ((unsigned __int64)v25 >> 5));
          v31 = ((1 << (v25 & 0x1F)) - 1) | *v30;
          for ( j = v30 + 1; ; ++j )
          {
            v33 = ~v31;
            if ( v33 )
              break;
            if ( (unsigned __int64)j > v29 )
              goto LABEL_47;
            v31 = *++v30;
          }
          _BitScanForward64((unsigned __int64 *)&v34, v33);
          v17 = v34 + 32 * (((__int64)v30 - v27) >> 2);
          if ( v17 > v26 )
          {
LABEL_47:
            v17 = *(_DWORD *)v2;
            goto LABEL_41;
          }
          for ( k = ~(v33 | ((1 << v34) - 1)); ; k = *v36 )
          {
            if ( (_DWORD)k )
            {
              _BitScanForward64(&k, k);
              goto LABEL_38;
            }
            v36 = v30 + 1;
            if ( (unsigned __int64)(v30 + 1) > v29 )
              break;
            ++v30;
          }
          LODWORD(k) = 32;
LABEL_38:
          v37 = k + 32 * (((__int64)v30 - v27) >> 2);
          if ( v37 > v26 )
            v37 = *(_DWORD *)v2;
          v28 = v37 - v17;
LABEL_41:
          v10 = v28;
          if ( v28 )
            continue;
        }
        return;
      }
      if ( v23 > StorageLength )
LABEL_54:
        v23 = StorageLength;
      HvpViewMapUnCOWAndSealRange(v21, v24, v23 - (unsigned int)v24);
      goto LABEL_27;
    }
  }
}
