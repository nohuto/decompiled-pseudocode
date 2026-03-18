/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x14002B1A0
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034562C (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  PVOID v2; // rax
  void *v3; // r9
  int v4; // edi
  __int64 v5; // rdx
  int v6; // r8d
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  unsigned int v11; // eax

  v2 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(*((_QWORD *)this + 1) + 1424LL));
  *(_QWORD *)this = v2;
  v3 = v2;
  if ( !v2 )
    return;
  v4 = 1;
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( *(int *)(v5 + 2736) < 0x2000 )
  {
    v6 = 1;
    if ( !*(_BYTE *)(v5 + 3036) )
    {
      v7 = 1304;
      goto LABEL_5;
    }
  }
  else
  {
    v6 = *(_DWORD *)(v5 + 296);
  }
  v7 = *(_DWORD *)(v5 + 2944) * ((v6 << 6) + ((8 * v6 + 231) & 0xFFFFFFF8)) + 8 * (v6 + 77);
LABEL_5:
  memset(v3, 0, v7);
  v8 = *(_QWORD *)this;
  v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  v10 = *(_DWORD *)(v9 + 2944);
  if ( *(int *)(v9 + 2736) < 0x2000 )
  {
    if ( !*(_BYTE *)(v9 + 3036) )
    {
      *(_BYTE *)(v8 + 356) = 0;
      return;
    }
  }
  else
  {
    v4 = *(_DWORD *)(v9 + 296);
  }
  *(_BYTE *)(v8 + 356) = 1;
  *(_DWORD *)(v8 + 608) = v4;
  *(_DWORD *)(v8 + 604) = v10;
  *(_DWORD *)(v8 + 612) = v10 * ((v4 << 6) + ((8 * v4 + 231) & 0xFFFFFFF8)) + 16;
  v11 = v10 * ((v4 << 6) + ((8 * v4 + 231) & 0xFFFFFFF8)) + 616;
  *(_DWORD *)(v8 + 552) = v11;
  *(_DWORD *)(v8 + 556) = 8 * v4 + v11;
}
