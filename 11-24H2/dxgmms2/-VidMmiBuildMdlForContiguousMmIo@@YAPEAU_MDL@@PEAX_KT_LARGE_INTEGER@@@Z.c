/*
 * XREFs of ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1400C02C8
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C16A0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1400D83BC (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAEPEAX@Z.c)
 *     MapInCpuVisibleSegment @ 0x140114D50 (MapInCpuVisibleSegment.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiBuildMdlForContiguousMmIo(unsigned __int64 Base, SIZE_T Length, union _LARGE_INTEGER a3)
{
  __int16 v3; // bp
  ULONG v5; // r14d
  SIZE_T v7; // rdi
  PMDL result; // rax
  SIZE_T v9; // rdx
  LONGLONG v10; // rbx

  v3 = Base;
  v5 = Length;
  v7 = ((Base & 0xFFF) + Length + 4095) >> 12;
  result = MmCreateMdl(0LL, (PVOID)Base, Length);
  v9 = 0LL;
  if ( result )
  {
    result->Next = 0LL;
    result->Size = 8 * (v7 + 6);
    result->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    result->MdlFlags = 1;
    result->ByteOffset = v3 & 0xFFF;
    result->ByteCount = v5;
    if ( v7 )
    {
      v10 = a3.QuadPart >> 12;
      do
      {
        *((_QWORD *)&result[1].Next + v9) = v10 + v9;
        ++v9;
      }
      while ( v9 < v7 );
    }
  }
  return result;
}
