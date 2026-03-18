/*
 * XREFs of ?Connect@DXGDOORBELL@@QEAAJXZ @ 0x1401D28E0
 * Callers:
 *     ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1401D31BC (-DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DdiConnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CONNECTDOORBELL@@@Z @ 0x14019F9F8 (-DdiConnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CONNECTDOORBELL@@@Z.c)
 */

__int64 __fastcall DXGDOORBELL::Connect(DXGDOORBELL *this)
{
  __int64 v1; // r8
  bool v4; // zf
  struct _MDL *v5; // r15
  int v6; // eax
  __int64 v7; // r14
  const wchar_t *v8; // r9
  PVOID v9; // rcx
  struct _MDL *Mdl; // r12
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v12; // r8d
  LONGLONG v13; // rcx
  __int64 v14; // rdx
  NTSTATUS v15; // eax
  const wchar_t *v16; // r9
  PHYSICAL_ADDRESS v17; // rax
  unsigned int v18; // r9d
  LONGLONG v19; // rdx
  __int64 v20; // r8
  NTSTATUS v21; // eax
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  PVOID VirtualAddress[2]; // [rsp+58h] [rbp-28h]
  PVOID BaseAddress[2]; // [rsp+68h] [rbp-18h]
  ULONG_PTR Length; // [rsp+B0h] [rbp+30h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(*(_QWORD *)(v1 + 16) + 392LL) & 0x20) != 0 )
  {
    **((_QWORD **)this + 17) = 0LL;
    return 0LL;
  }
  v4 = *((_QWORD *)this + 9) == 0LL;
  Length = *((_QWORD *)this + 5);
  v5 = 0LL;
  v22 = *((_QWORD *)this + 1);
  *(_OWORD *)VirtualAddress = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  LODWORD(VirtualAddress[0]) = _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFE | !v4;
  v6 = ADAPTER_RENDER::DdiConnectDoorbell(
         *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 16LL) + 16LL),
         (struct _DXGKARG_CONNECTDOORBELL *)&v22,
         v1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = VirtualAddress[1];
    if ( !VirtualAddress[1] || *((_QWORD *)this + 9) && !BaseAddress[0] )
    {
      WdLogSingleEntry5(0LL, 275LL, 51LL, VirtualAddress[1], BaseAddress[0], 0LL);
      v9 = VirtualAddress[1];
      WdLogGlobalForLineNumber = 3477;
    }
    Mdl = IoAllocateMdl(v9, Length, 0, 0, 0LL);
    if ( !Mdl )
    {
      v7 = -1073741801LL;
      WdLogSingleEntry2(2LL, this, -1073741801LL);
      v8 = L"DXGDOORBELL 0x%I64x: Failed to allocate memory for Mdl, returning 0x%I64x";
      WdLogGlobalForLineNumber = 3485;
      goto LABEL_11;
    }
    PhysicalAddress = MmGetPhysicalAddress(VirtualAddress[1]);
    v12 = 0;
    v13 = PhysicalAddress.QuadPart >> 12;
    if ( (Length & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      v14 = 0LL;
      do
      {
        ++v12;
        *((_QWORD *)&Mdl[1].Next + v14) = v13++;
        v14 = v12;
      }
      while ( v12 < Length >> 12 );
    }
    v15 = MmRotatePhysicalView(*((PVOID *)this + 7), &Length, Mdl, MmToFrameBufferNoCopy, 0LL, 0LL);
    v7 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v15);
      v16 = L"DXGDOORBELL 0x%I64x: MmRotatePhysicalView failed with Status 0x%I64x";
      WdLogGlobalForLineNumber = 3502;
LABEL_17:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v16, (__int64)this, v7, 0LL, 0LL, 0LL);
      goto LABEL_27;
    }
    if ( *((_QWORD *)this + 9) )
    {
      Length = *((_QWORD *)this + 6);
      v5 = IoAllocateMdl(BaseAddress[0], Length, 0, 0, 0LL);
      if ( !v5 )
      {
        v7 = -1073741801LL;
        WdLogSingleEntry2(2LL, this, -1073741801LL);
        v16 = L"DXGDOORBELL 0x%I64x: Failed to allocate memory for secondary Mdl, returning 0x%I64x";
        WdLogGlobalForLineNumber = 3513;
        goto LABEL_17;
      }
      v17 = MmGetPhysicalAddress(BaseAddress[0]);
      v18 = 0;
      v19 = v17.QuadPart >> 12;
      if ( (Length & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v20 = 0LL;
        do
        {
          ++v18;
          *((_QWORD *)&v5[1].Next + v20) = v19++;
          v20 = v18;
        }
        while ( v18 < Length >> 12 );
      }
      v21 = MmRotatePhysicalView(*((PVOID *)this + 9), &Length, v5, MmToFrameBufferNoCopy, 0LL, 0LL);
      v7 = v21;
      if ( v21 < 0 )
      {
        WdLogSingleEntry2(2LL, this, v21);
        v16 = L"DXGDOORBELL 0x%I64x: MmRotatePhysicalView failed for secondary CPUVA with Status 0x%I64x";
        WdLogGlobalForLineNumber = 3532;
        goto LABEL_17;
      }
    }
    **((_QWORD **)this + 17) = LODWORD(BaseAddress[1]) == 1;
LABEL_27:
    IoFreeMdl(Mdl);
    if ( v5 )
      IoFreeMdl(v5);
    return (unsigned int)v7;
  }
  WdLogSingleEntry2(2LL, this, v6);
  v8 = L"DXGDOORBELL 0x%I64x: DdiConnectDoorbell failed with status 0x%I64x";
  WdLogGlobalForLineNumber = 3468;
LABEL_11:
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v8, (__int64)this, v7, 0LL, 0LL, 0LL);
  return (unsigned int)v7;
}
