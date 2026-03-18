/*
 * XREFs of ?ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14069EE54
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14069DC5C (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x14069E130 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x14070DD00 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 */

__int64 __fastcall SC_RAW::ReadPartitionTable(
        SC_RAW *this,
        struct SC_DISK_LAYOUT **a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  unsigned int v5; // edi
  const __m128i *v7; // rsi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  char v10; // r8

  v5 = 0;
  v7 = *(const __m128i **)(*(_QWORD *)this + 264LL);
  *a2 = 0LL;
  v8 = SC_ENV::Allocate(0xC0uLL, (unsigned int)a2, a3, a4);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0xC0uLL);
    if ( *(_DWORD *)(*(_QWORD *)this + 224LL) == 11 || v7[31].m128i_i16[7] == -21931 )
    {
      v9[1] = 1;
      v9[2] = 1;
      v9[3] = MBR_HEADER::CheckSum(v7);
      *((_QWORD *)v9 + 7) = 0LL;
      *((_QWORD *)v9 + 8) = *(_QWORD *)(*(_QWORD *)this + 248LL) << *(_DWORD *)(*(_QWORD *)this + 240LL);
      v9[18] = 0;
      *((_WORD *)v9 + 40) = 4;
      *((_BYTE *)v9 + 82) = v10;
      v9[21] = 0;
      *((_QWORD *)v9 + 11) = (unsigned int)v9[2];
      *((_QWORD *)v9 + 12) = 0LL;
    }
    else
    {
      v9[3] = MBR_HEADER::CheckSum(v7);
    }
    *a2 = (struct SC_DISK_LAYOUT *)v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
