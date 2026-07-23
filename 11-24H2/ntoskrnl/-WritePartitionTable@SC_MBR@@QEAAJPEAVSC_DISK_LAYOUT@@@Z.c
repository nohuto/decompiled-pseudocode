/*
 * XREFs of ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14069F73C
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14069F09C (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14069F2E8 (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14069ED80 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14069F17C (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x14069F1C0 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x14069F204 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14070B9C0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_MBR::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2)
{
  __int8 *v2; // r11
  unsigned int v4; // edx
  const __m128i *v6; // r15
  unsigned int v7; // r13d
  unsigned int v8; // eax
  int v9; // esi
  unsigned int v10; // r10d
  char v11; // bp
  __int8 *v12; // r14
  unsigned int i; // edi
  __int8 *v14; // r9
  __int64 v15; // r8
  char v16; // cl
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // edi
  int Sectors; // eax
  int v25; // [rsp+20h] [rbp-58h]
  unsigned int v26; // [rsp+24h] [rbp-54h]
  struct _GUID v27; // [rsp+28h] [rbp-50h] BYREF

  v2 = 0LL;
  v26 = 0;
  v4 = 0;
  v25 = 0;
  v6 = (const __m128i *)*((_QWORD *)*this + 33);
  v7 = 0;
  v8 = *((_DWORD *)a2 + 2);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v27 = 0LL;
  if ( !v8 )
  {
    SC_ENV::CreateGuid(&v27);
    v4 = 0;
    v10 = 0;
    v8 = *(_DWORD *)&v27.Data4[4] ^ *(_DWORD *)v27.Data4 ^ *(_DWORD *)&v27.Data2 ^ v27.Data1;
    *((_DWORD *)a2 + 2) = v8;
    v2 = 0LL;
  }
  if ( v6[27].m128i_i32[2] != v8 )
  {
    v6[27].m128i_i32[2] = v8;
    v11 = 1;
    *((_DWORD *)a2 + 3) = MBR_HEADER::CheckSum(v6);
  }
  while ( 1 )
  {
    v12 = v2;
    for ( i = (unsigned int)v2; i < 4 && v4 < *((_DWORD *)a2 + 1); ++i )
    {
      v14 = &v6[i + 27].m128i_i8[14];
      v15 = 18LL * v4;
      v16 = *((_BYTE *)a2 + 144 * v4 + 80);
      if ( v16 == 5 || v16 == 15 )
      {
        if ( v12 )
          return (unsigned int)-1073741823;
        v12 = &v6[i + 27].m128i_i8[14];
        v10 = v7;
      }
      v17 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 36 * v4 + 23) = 0;
      *((_DWORD *)a2 + 36 * v4 + 22) = v17;
      *((_QWORD *)a2 + 18 * v4 + 12) = *((_QWORD *)a2 + 18 * v4 + 7);
      if ( *((_BYTE *)a2 + 144 * v4 + 76) != (_BYTE)v2 )
      {
        if ( v16 )
        {
          *v14 = *((_BYTE *)a2 + 144 * v4 + 81) != 0 ? 0x80 : 0;
          v14[4] = *((_BYTE *)a2 + 144 * v4 + 80);
          v18 = *((_QWORD *)a2 + 18 * v4 + 7);
          v19 = *((_DWORD *)*this + 59);
          if ( v19 )
            v18 /= (__int64)v19;
          *((_DWORD *)v14 + 2) = v18 - v10;
          v20 = *((_QWORD *)a2 + v15 + 8);
          v21 = *((_DWORD *)*this + 59);
          if ( v21 )
            v20 /= (__int64)v21;
          *((_DWORD *)v14 + 3) = v20;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)((char *)&v6[i + 27].m128i_u64[1] + 6), (struct _DISK_GEOMETRY *)*this + 9);
          v4 = v25;
          LOBYTE(v2) = 0;
        }
        else
        {
          *(_OWORD *)v14 = 0LL;
        }
        v11 = 1;
      }
      v10 = v26;
      v25 = ++v4;
    }
    if ( v11 )
    {
      v9 = SC_DISK::WriteSectors(*this, 1LL, v10, 0LL);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v11 = 0;
    }
    if ( !v12 )
      break;
    v22 = *((_DWORD *)v12 + 2);
    v26 = v22 + v7;
    Sectors = SC_DISK::ReadSectors(*this, 1LL, v22 + v7, 0LL);
    v2 = 0LL;
    v9 = Sectors;
    if ( Sectors < 0 )
      break;
    v4 = v25;
    v10 = v22 + v7;
    if ( v7 )
      v22 = v7;
    v6[31].m128i_i16[7] = -21931;
    v7 = v22;
  }
  return (unsigned int)v9;
}
