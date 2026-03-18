/*
 * XREFs of ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140234E98
 * Callers:
 *     ?EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140234FC0 (-EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x14006F910 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x14006F960 (CheckOrAcquireDwmStateLock.c)
 *     UserDereferenceDwmProcess @ 0x14006F990 (UserDereferenceDwmProcess.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitInitialize(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // si
  char v5; // bp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rcx
  char v14; // [rsp+38h] [rbp-20h]
  void *v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 15);
  v3 = 0;
  if ( v2 >= 0 && (v2 & 0x3F) == 0x3F )
  {
    v15 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x44uLL, &v15) )
    {
      v5 = CheckOrAcquireDwmStateLock();
      v7 = ReferenceDwmProcess(v6);
      v9 = (void *)v7;
      if ( v7 )
      {
        v10 = *((_QWORD *)this + 13);
        v11 = *((_QWORD *)this + 16);
        v16 = 0LL;
        v14 = 0;
        if ( (int)ObDuplicateObject(v11, v10, v7, &v16, 0, 0, 6, v14) >= 0 )
        {
          v12 = (char *)v15;
          v3 = 1;
          *(_DWORD *)v15 = 68;
          *((_DWORD *)v12 + 1) = 168;
          *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
          *((_DWORD *)v12 + 3) = *((_DWORD *)this + 16);
          *((_DWORD *)v12 + 4) = *((_DWORD *)this + 17);
          *(_QWORD *)(v12 + 20) = *(_QWORD *)((char *)this + 116);
          *(_OWORD *)(v12 + 28) = *(_OWORD *)((char *)this + 76);
          *((_DWORD *)v12 + 11) = *((_DWORD *)this + 18);
          *(_QWORD *)(v12 + 52) = v16;
          *((_DWORD *)v12 + 15) = *((_DWORD *)this + 31);
          *((_DWORD *)this + 15) |= 0x80000000;
        }
        UserDereferenceDwmProcess(v9);
      }
      if ( v5 )
        GreUnlockDwmState(v8);
    }
  }
  return v3;
}
