/*
 * XREFs of ?EmitInjections@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140125AF4
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140125A60 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitInjections(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v5; // rdx
  _OWORD **v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // r8
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 34) )
  {
    v11 = 0LL;
    while ( *((_DWORD *)this + 34) )
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x8CuLL, &v11) )
        return 0;
      v5 = (char *)v11;
      *(_DWORD *)v11 = 140;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 240;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      v6 = (_OWORD **)*((_QWORD *)this + 16);
      v7 = *v6;
      *(_OWORD *)(v5 + 12) = **v6;
      *(_OWORD *)(v5 + 28) = v7[1];
      *(_OWORD *)(v5 + 44) = v7[2];
      *(_OWORD *)(v5 + 60) = v7[3];
      *(_OWORD *)(v5 + 76) = v7[4];
      *(_OWORD *)(v5 + 92) = v7[5];
      *(_OWORD *)(v5 + 108) = v7[6];
      *(_OWORD *)(v5 + 124) = v7[7];
      GreDeleteFastMutex(**((char ***)this + 16));
      v8 = 0LL;
      if ( (*((_DWORD *)this + 34))-- != 1 )
      {
        do
        {
          v10 = (unsigned int)(v8 + 1);
          *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v8) = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v10);
          v8 = v10;
        }
        while ( (unsigned int)v10 < *((_DWORD *)this + 34) );
      }
    }
  }
  return 1;
}
