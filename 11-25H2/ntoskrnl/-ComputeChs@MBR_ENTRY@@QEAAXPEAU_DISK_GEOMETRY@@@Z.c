/*
 * XREFs of ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x140692DD4
 * Callers:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1406919E8 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140693304 (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MBR_ENTRY::ComputeChs(MBR_ENTRY *this, struct _DISK_GEOMETRY *a2)
{
  DWORD v2; // ebp
  _BYTE **v3; // rdi
  ULONG *v5; // rbx
  __int64 v6; // r14
  ULONG v7; // esi
  ULONG v8; // eax
  DWORD v9; // ecx
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  DWORD SectorsPerTrack; // r8d
  _BYTE *v13; // rdx
  _DWORD v14[2]; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a2->SectorsPerTrack * a2->TracksPerCylinder;
  v3 = (_BYTE **)v15;
  v15[0] = (char *)this + 1;
  v5 = v14;
  v14[0] = *((_DWORD *)this + 2);
  v6 = 2LL;
  v15[1] = (char *)this + 5;
  v7 = a2->Cylinders.LowPart * v2;
  v14[1] = *((_DWORD *)this + 3) + v14[0] - 1;
  do
  {
    v8 = *v5;
    if ( *v5 >= v7 )
    {
      v10 = a2->Cylinders.LowPart - 1;
      SectorsPerTrack = a2->SectorsPerTrack;
      LOBYTE(v11) = a2->TracksPerCylinder - 1;
    }
    else
    {
      v9 = a2->SectorsPerTrack;
      v10 = v8 / v2;
      v11 = v8 % v2 / v9;
      LOBYTE(SectorsPerTrack) = v8 % v2 % v9 + 1;
    }
    v13 = *v3;
    ++v5;
    ++v3;
    *v13 = v11;
    v13[1] = (v10 >> 2) ^ (SectorsPerTrack ^ (v10 >> 2)) & 0x3F;
    v13[2] = v10;
    --v6;
  }
  while ( v6 );
}
