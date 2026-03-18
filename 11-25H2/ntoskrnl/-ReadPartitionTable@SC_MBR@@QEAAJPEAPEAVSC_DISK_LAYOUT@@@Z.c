/*
 * XREFs of ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140692FCC
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1406928BC (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14069294C (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x140692D90 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x1406932A4 (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140701E20 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_MBR::ReadPartitionTable(
        SC_DISK **this,
        struct SC_DISK_LAYOUT **a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // r15d
  const __m128i *v6; // rsi
  unsigned int v7; // edi
  char *v8; // rax
  char *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // r8
  unsigned int v12; // r9d
  unsigned __int8 *v13; // rbp
  __int64 v14; // rdi
  unsigned __int8 *v15; // r14
  unsigned __int8 v16; // r13
  __int64 v17; // rsi
  unsigned int v18; // eax
  MBR_ENTRY *v19; // rcx
  char v20; // r13
  unsigned __int8 v21; // al
  unsigned int v22; // eax
  int v23; // ecx
  unsigned __int8 v24; // cf
  char v25; // al
  unsigned int v26; // eax
  unsigned int v27; // ebp
  char *v28; // rax
  char *v29; // rsi
  unsigned int v31; // [rsp+20h] [rbp-68h]
  int Sectors; // [rsp+24h] [rbp-64h]
  MBR_ENTRY *v33; // [rsp+28h] [rbp-60h]
  const __m128i *v34; // [rsp+30h] [rbp-58h]
  char v37; // [rsp+A0h] [rbp+18h]
  unsigned int v38; // [rsp+A8h] [rbp+20h]

  v37 = 0;
  v4 = 0;
  Sectors = 0;
  v5 = 0;
  v31 = 0;
  v6 = (const __m128i *)*((_QWORD *)*this + 33);
  v7 = 0;
  v34 = v6;
  *a2 = 0LL;
  v8 = (char *)SC_ENV::Allocate(0x270uLL, (unsigned int)a2, a3, a4);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8 + 4, 0, 0x26CuLL);
    *(_DWORD *)v9 = 0;
    *((_DWORD *)v9 + 2) = v6[27].m128i_i32[2];
    *((_DWORD *)v9 + 3) = MBR_HEADER::CheckSum(v6);
    while ( 1 )
    {
      if ( v6[31].m128i_i16[7] != -21931 )
      {
LABEL_30:
        *((_DWORD *)v9 + 1) = (v5 + 3) & 0xFFFFFFFC;
        *a2 = (struct SC_DISK_LAYOUT *)v9;
        return v7;
      }
      v13 = 0LL;
      v14 = 4LL;
      v15 = &v6[28].m128i_u8[2];
      do
      {
        v16 = *v15;
        v17 = 18LL * v5;
        if ( *v15 == 5 || v16 == 15 )
        {
          if ( v13 )
          {
            v20 = 1;
            v37 = 1;
            goto LABEL_20;
          }
          v13 = v15 - 4;
          v18 = v4;
          v19 = (MBR_ENTRY *)(v15 - 4);
        }
        else
        {
          v18 = v31;
          v19 = (MBR_ENTRY *)(v15 - 4);
        }
        v33 = v19;
        v38 = v18;
        v21 = MBR_ENTRY::Validate(v19, v18, *((_QWORD *)*this + 31));
        v12 = 0;
        if ( v21 )
        {
          ++v5;
          if ( v16 )
          {
            v11 = (unsigned __int8)this;
            *(_DWORD *)&v9[8 * v17 + 48] = 0;
            v10 = (v38 + (unsigned __int64)*((unsigned int *)v15 + 1)) << *((_DWORD *)*this + 60);
            *(_QWORD *)&v9[8 * v17 + 56] = v10;
            *(_QWORD *)&v9[8 * v17 + 64] = (unsigned __int64)*((unsigned int *)v15 + 2) << *((_DWORD *)*this + 60);
            *(_DWORD *)&v9[8 * v17 + 72] = 0;
            v9[8 * v17 + 80] = *v15;
            v9[8 * v17 + 81] = *(_BYTE *)v33 == 0x80;
            v22 = *v15;
            if ( (unsigned __int8)v22 > 0xFu || (v23 = 32801, v24 = _bittest(&v23, v22), v25 = 0, !v24) )
              v25 = 1;
            v9[8 * v17 + 82] = v25;
            *(_DWORD *)&v9[8 * v17 + 84] = *((_DWORD *)v15 + 1);
            *(_QWORD *)&v9[8 * v17 + 88] = *((unsigned int *)v9 + 2);
            *(_QWORD *)&v9[8 * v17 + 96] = v10;
          }
          v20 = v37;
        }
        else
        {
          v20 = 1;
          v37 = 1;
        }
LABEL_20:
        v15 += 16;
        --v14;
      }
      while ( v14 );
      v7 = Sectors;
      if ( v20 || !v13 )
        goto LABEL_30;
      v26 = *((_DWORD *)v13 + 2);
      v27 = v26 + v4;
      if ( !v4 )
        v4 = v26;
      v31 = v27;
      v28 = (char *)SC_ENV::Allocate(144 * v5 + 624, v10, v11, v12);
      v29 = v28;
      if ( !v28 )
      {
        v7 = -1073741670;
        if ( !v9 )
          return v7;
LABEL_29:
        PspUserApcKernelRoutine(v9);
        return v7;
      }
      memmove(v28, v9, (int)(144 * v5 + 48));
      memset_0(&v29[144 * v5 + 48], 0, 0x240uLL);
      PspUserApcKernelRoutine(v9);
      v9 = v29;
      Sectors = SC_DISK::ReadSectors(*this, 1LL, v27, 0LL);
      v7 = Sectors;
      if ( Sectors < 0 )
        goto LABEL_29;
      v6 = v34;
    }
  }
  return (unsigned int)-1073741670;
}
