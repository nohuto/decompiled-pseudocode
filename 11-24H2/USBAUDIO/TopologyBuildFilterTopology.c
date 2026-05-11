/*
 * XREFs of TopologyBuildFilterTopology @ 0x140041B1C
 * Callers:
 *     FilterCreateFilterContext @ 0x14003035C (FilterCreateFilterContext.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     TopologyFixUpFunctionUnits @ 0x14002DF20 (TopologyFixUpFunctionUnits.c)
 *     TopologyCountComponents @ 0x14002E4D4 (TopologyCountComponents.c)
 *     TopologyFreeFunctionUnits @ 0x14002E654 (TopologyFreeFunctionUnits.c)
 *     PropertyGetAudioLatency @ 0x140031400 (PropertyGetAudioLatency.c)
 *     TopologyProcessExtensionUnit @ 0x1400318B0 (TopologyProcessExtensionUnit.c)
 *     TopologyProcessInputTerminalUnit @ 0x1400319A0 (TopologyProcessInputTerminalUnit.c)
 *     TopologyProcessMIDIElement @ 0x140031A70 (TopologyProcessMIDIElement.c)
 *     TopologyProcessOutputTerminalUnit @ 0x140031C90 (TopologyProcessOutputTerminalUnit.c)
 *     TopologyProcessProcessUnit @ 0x140031D90 (TopologyProcessProcessUnit.c)
 *     TopologyProcessSelectorUnit @ 0x140031ED0 (TopologyProcessSelectorUnit.c)
 *     TopologyProcessFeatureUnit @ 0x14003F350 (TopologyProcessFeatureUnit.c)
 *     TopologyProcessMixerUnit @ 0x140040D70 (TopologyProcessMixerUnit.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _QWORD *v4; // r12
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  GUID *Pool2; // rax
  GUID *v12; // rdi
  __int64 v13; // rdx
  int v14; // esi
  unsigned int v15; // r11d
  GUID *v16; // r13
  int *v17; // r14
  int *v18; // rbx
  unsigned __int8 *Data4; // rcx
  _DWORD *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // r8d
  int v26; // r9d
  int v27; // eax
  int v28; // r10d
  __int64 v29; // rsi
  unsigned __int8 *v30; // rcx
  __int64 v31; // rax
  int v32; // edx
  unsigned int v33; // [rsp+40h] [rbp-40h] BYREF
  NTSTATUS v34; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v35; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-34h] BYREF
  int v37; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-2Ch] BYREF
  int v39; // [rsp+58h] [rbp-28h]
  __int64 v40; // [rsp+60h] [rbp-20h] BYREF
  int v41; // [rsp+68h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v40 = a1;
  v4 = (_QWORD *)(v2 + 80);
  v34 = 0;
  v33 = 0;
  v38 = 0;
  v37 = 0;
  v35 = 0;
  v36 = 0;
  result = TopologyFixUpFunctionUnits(v4);
  if ( (int)result >= 0 )
  {
    TopologyCountComponents(v4, &v34, &v33, (int *)&v38, &v37);
    v7 = v33;
    v8 = v38;
    v9 = (unsigned int)(v34 + 1);
    v39 = v34 + 1;
    v10 = 200LL * v33 + 16 * (v38 + v9);
    *(_DWORD *)(a2 + 68) = 168;
    if ( v10 > 0xFFFFFFFF )
      return 3221225858LL;
    Pool2 = (GUID *)ExAllocatePool2(64LL, (unsigned int)v10, 1096972357LL);
    v12 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v34 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Pool2, ExFreePool);
    v14 = v34;
    if ( v34 < 0 )
    {
      ExFreePool(v12);
      return (unsigned int)v14;
    }
    v15 = v33;
    v16 = &v12[v9];
    v17 = (int *)v16 + 42 * v7;
    *(_QWORD *)(a2 + 56) = v12;
    v18 = &v17[4 * v8];
    *(_QWORD *)(a2 + 72) = v16;
    *(_QWORD *)(a2 + 88) = v17;
    if ( v15 )
    {
      Data4 = v16[6].Data4;
      v13 = v15;
      do
      {
        *((_QWORD *)Data4 - 12) = v18;
        v20 = v18 + 4;
        *((_DWORD *)Data4 - 5) = -1;
        *((_QWORD *)Data4 - 11) = v20;
        v18 = v20 + 4;
        *(_DWORD *)Data4 = -1;
        *((_QWORD *)Data4 - 13) = Data4 - 80;
        Data4 += 168;
        --v13;
      }
      while ( v13 );
      v14 = v34;
    }
    v21 = 1LL;
    *v12 = KSCATEGORY_AUDIO;
    if ( (v37 & 1) != 0 )
    {
      v21 = 2LL;
      v12[1] = KSCATEGORY_RENDER;
    }
    if ( (v37 & 2) != 0 )
      v12[v21] = KSCATEGORY_CAPTURE;
    *(_DWORD *)(a2 + 48) = v39;
    v22 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 != v4 )
    {
      v23 = v40;
      do
      {
        if ( v14 < 0 )
          goto LABEL_25;
        v24 = *((unsigned int *)v22 + 5);
        if ( (unsigned int)v24 >= 9 )
        {
          v40 = 0x203379997LL;
          v41 = -1073741637;
          RtlLogUnexpectedCodepath(&v40, v13);
          v14 = -1073741637;
        }
        else
        {
          v14 = pUnitProcessRtn[v24](v23, (int)v22, (int)v16, (int)v17, (__int64)&v35, (__int64)&v36);
          if ( v14 >= 0 )
            v22 = (_QWORD *)*v22;
        }
      }
      while ( v22 != v4 );
      v34 = v14;
      if ( v14 < 0 )
      {
LABEL_25:
        TopologyFreeFunctionUnits(v23);
        return (unsigned int)v14;
      }
      v15 = v33;
    }
    v25 = v36;
    v26 = 0;
    *(_DWORD *)(a2 + 64) = v35;
    *(_DWORD *)(a2 + 80) = v25;
    if ( !v25 )
    {
LABEL_39:
      if ( v15 )
      {
        v29 = v33;
        v30 = v16[1].Data4;
        do
        {
          v31 = 2LL * *((unsigned int *)v30 + 13);
          v32 = dword_14001E6B0[4 * *((unsigned int *)v30 + 13)];
          if ( v32 )
          {
            *(_DWORD *)v30 = v32;
            *((_QWORD *)v30 + 1) = (&off_14001E6B8)[v31];
            *((_DWORD *)v30 + 1) = 72;
          }
          v30 += 168;
          --v29;
        }
        while ( v29 );
        return (unsigned int)v34;
      }
      return (unsigned int)v14;
    }
    while ( 1 )
    {
      v27 = *v17;
      if ( *v17 != -1 )
      {
        if ( v27 < 0 )
        {
          *v17 = v27 & 0x7FFFFFFF;
LABEL_37:
          v25 = v36;
          goto LABEL_38;
        }
        v35 = v15;
        if ( v15 )
        {
          v28 = v15;
          while ( *v17 != *(&v16[5].Data1 + 42 * (unsigned int)--v28) )
          {
            v35 = v28;
            if ( !v28 )
              goto LABEL_38;
          }
          *v17 = v28;
          goto LABEL_37;
        }
      }
LABEL_38:
      v17 += 4;
      if ( ++v26 >= v25 )
        goto LABEL_39;
    }
  }
  return result;
}
