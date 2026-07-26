/*
 * XREFs of ?moveElements@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAAXKKK@Z @ 0x14015047C
 * Callers:
 *     ?insertAt@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z @ 0x1401502B8 (-insertAt@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z.c)
 * Callees:
 *     ??1LwfBindProperties@@QEAA@XZ @ 0x1400CD6E0 (--1LwfBindProperties@@QEAA@XZ.c)
 */

void __fastcall Rtl::KArray<LwfBindProperties,1>::moveElements(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v8; // ebp
  unsigned int v9; // r12d
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  unsigned int v19; // r12d
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // esi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  __int64 v30; // rbx

  if ( a2 != a3 && a4 )
  {
    if ( a2 >= a3 )
    {
      v18 = a3;
      v19 = a2 - a3;
      if ( a3 < a2 )
      {
        v20 = (unsigned __int64)a3 << 6;
        do
        {
          v21 = *(_QWORD *)(a1 + 8);
          v22 = (unsigned __int64)(v18 + v19) << 6;
          ++v18;
          v23 = v21 + v22;
          *(_OWORD *)(v20 + v21) = *(_OWORD *)v23;
          *(_DWORD *)(v20 + v21 + 16) = *(_DWORD *)(v23 + 16);
          v20 += 64LL;
          *(_DWORD *)(v20 + v21 - 44) = *(_DWORD *)(v23 + 20);
          *(_QWORD *)(v20 + v21 - 40) = *(_QWORD *)(v23 + 24);
          *(_QWORD *)(v23 + 24) = 0LL;
          *(_QWORD *)(v23 + 16) = 0LL;
          *(_DWORD *)(v20 + v21 - 32) = *(_DWORD *)(v23 + 32);
          *(_DWORD *)(v20 + v21 - 28) = *(_DWORD *)(v23 + 36);
          *(_QWORD *)(v20 + v21 - 24) = *(_QWORD *)(v23 + 40);
          *(_QWORD *)(v23 + 40) = 0LL;
          *(_QWORD *)(v23 + 32) = 0LL;
          *(_DWORD *)(v20 + v21 - 16) = *(_DWORD *)(v23 + 48);
          *(_BYTE *)(v20 + v21 - 12) = *(_BYTE *)(v23 + 52);
          *(_DWORD *)(v20 + v21 - 8) = *(_DWORD *)(v23 + 56);
        }
        while ( v18 < a2 );
      }
      v24 = a4 + a3;
      if ( v18 < v24 )
      {
        v25 = (unsigned __int64)v18 << 6;
        v26 = v25;
        do
        {
          LwfBindProperties::~LwfBindProperties((LwfBindProperties *)(v26 + *(_QWORD *)(a1 + 8)));
          v27 = *(_QWORD *)(a1 + 8);
          v28 = v27 + ((unsigned __int64)(v18 + v19) << 6);
          ++v18;
          v26 += 64LL;
          *(_OWORD *)(v25 + v27) = *(_OWORD *)v28;
          *(_DWORD *)(v25 + v27 + 16) = *(_DWORD *)(v28 + 16);
          v25 += 64LL;
          *(_DWORD *)(v25 + v27 - 44) = *(_DWORD *)(v28 + 20);
          *(_QWORD *)(v25 + v27 - 40) = *(_QWORD *)(v28 + 24);
          *(_QWORD *)(v28 + 24) = 0LL;
          *(_QWORD *)(v28 + 16) = 0LL;
          *(_DWORD *)(v25 + v27 - 32) = *(_DWORD *)(v28 + 32);
          *(_DWORD *)(v25 + v27 - 28) = *(_DWORD *)(v28 + 36);
          *(_QWORD *)(v25 + v27 - 24) = *(_QWORD *)(v28 + 40);
          *(_QWORD *)(v28 + 40) = 0LL;
          *(_QWORD *)(v28 + 32) = 0LL;
          *(_DWORD *)(v25 + v27 - 16) = *(_DWORD *)(v28 + 48);
          *(_BYTE *)(v25 + v27 - 12) = *(_BYTE *)(v28 + 52);
          *(_DWORD *)(v25 + v27 - 8) = *(_DWORD *)(v28 + 56);
        }
        while ( v18 < v24 );
      }
      if ( v18 < a2 + a4 )
      {
        v29 = (unsigned __int64)v18 << 6;
        v30 = a2 + a4 - v18;
        do
        {
          LwfBindProperties::~LwfBindProperties((LwfBindProperties *)(v29 + *(_QWORD *)(a1 + 8)));
          v29 += 64LL;
          --v30;
        }
        while ( v30 );
      }
    }
    else
    {
      v8 = a3 + a4;
      v9 = a3 - a2;
      v10 = a3 + a4 - 1;
      if ( v10 >= *(_DWORD *)(a1 + 4) )
      {
        do
        {
          v11 = *(_QWORD *)(a1 + 8);
          v12 = v11 + ((unsigned __int64)v10 << 6);
          v13 = v11 + ((unsigned __int64)(v8 - v9 - 1) << 6);
          --v8;
          *(_OWORD *)v12 = *(_OWORD *)v13;
          *(_DWORD *)(v12 + 16) = *(_DWORD *)(v13 + 16);
          *(_DWORD *)(v12 + 20) = *(_DWORD *)(v13 + 20);
          *(_QWORD *)(v12 + 24) = *(_QWORD *)(v13 + 24);
          *(_QWORD *)(v13 + 24) = 0LL;
          *(_QWORD *)(v13 + 16) = 0LL;
          *(_DWORD *)(v12 + 32) = *(_DWORD *)(v13 + 32);
          *(_DWORD *)(v12 + 36) = *(_DWORD *)(v13 + 36);
          *(_QWORD *)(v12 + 40) = *(_QWORD *)(v13 + 40);
          *(_QWORD *)(v13 + 40) = 0LL;
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_DWORD *)(v12 + 48) = *(_DWORD *)(v13 + 48);
          *(_BYTE *)(v12 + 52) = *(_BYTE *)(v13 + 52);
          *(_DWORD *)(v12 + 56) = *(_DWORD *)(v13 + 56);
          v10 = v8 - 1;
        }
        while ( v8 - 1 >= *(_DWORD *)(a1 + 4) );
      }
      for ( ; v8 > a3; *(_DWORD *)(v15 + v14 + 56) = *(_DWORD *)(v17 + 56) )
      {
        v14 = (unsigned __int64)(v8 - 1) << 6;
        LwfBindProperties::~LwfBindProperties((LwfBindProperties *)(v14 + *(_QWORD *)(a1 + 8)));
        v15 = *(_QWORD *)(a1 + 8);
        v16 = v8 - v9 - 1;
        --v8;
        v17 = v15 + (v16 << 6);
        *(_OWORD *)(v15 + v14) = *(_OWORD *)v17;
        *(_DWORD *)(v15 + v14 + 16) = *(_DWORD *)(v17 + 16);
        *(_DWORD *)(v15 + v14 + 20) = *(_DWORD *)(v17 + 20);
        *(_QWORD *)(v15 + v14 + 24) = *(_QWORD *)(v17 + 24);
        *(_QWORD *)(v17 + 24) = 0LL;
        *(_QWORD *)(v17 + 16) = 0LL;
        *(_DWORD *)(v15 + v14 + 32) = *(_DWORD *)(v17 + 32);
        *(_DWORD *)(v15 + v14 + 36) = *(_DWORD *)(v17 + 36);
        *(_QWORD *)(v15 + v14 + 40) = *(_QWORD *)(v17 + 40);
        *(_QWORD *)(v17 + 40) = 0LL;
        *(_QWORD *)(v17 + 32) = 0LL;
        *(_DWORD *)(v15 + v14 + 48) = *(_DWORD *)(v17 + 48);
        *(_BYTE *)(v15 + v14 + 52) = *(_BYTE *)(v17 + 52);
      }
      while ( v8 > a2 )
        LwfBindProperties::~LwfBindProperties((LwfBindProperties *)(*(_QWORD *)(a1 + 8) + ((unsigned __int64)--v8 << 6)));
    }
  }
}
