/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1403321F0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035AC0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1400390AC (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x14003B798 (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x14006B6E4 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E5A50 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140337FCC (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1403878BC (--0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocationObjects(
        DXGDEVICE *this,
        int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct DXGALLOCATION **a5)
{
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // r13
  DXGALLOCATION *v12; // rax
  __int64 v13; // rbx
  __int64 Pool2; // rax
  __int64 v15; // rdi
  DXGADAPTERALLOCATION_VGPU *v16; // rcx
  __int64 v17; // rcx
  struct DXGALLOCATION *v18; // rax
  bool v19; // zf
  DXGADAPTERALLOCATION_VGPU *v20; // rax
  __int64 v21; // rax
  struct DXGALLOCATION *v22; // rbx
  struct DXGALLOCATION *v23; // rdi
  DXGADAPTERALLOCATION *v24; // rcx
  int v26; // [rsp+90h] [rbp+8h]
  char v27; // [rsp+98h] [rbp+10h]

  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2945;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      2945LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( a4 && (*((_DWORD *)a4 + 1) & 1) != 0 )
  {
    v27 = 1;
    v11 = *(_QWORD *)(*((_QWORD *)a4 + 7) + 144LL);
  }
  else
  {
    v27 = 0;
    v11 = 0LL;
  }
  v26 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( (*((_BYTE *)this + 1917) & 1) != 0 )
      {
        v12 = (DXGALLOCATION *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(136LL);
        v13 = (__int64)v12;
        if ( !v12 )
          goto LABEL_34;
        DXGALLOCATION::DXGALLOCATION(v12, this);
        *(_DWORD *)(v13 + 72) |= 0x40000u;
        *(_DWORD *)(v13 + 96) = 0;
        *(_QWORD *)(v13 + 104) = 0LL;
        *(_QWORD *)(v13 + 120) = 0LL;
        *(_DWORD *)(v13 + 128) = 0;
      }
      else
      {
        Pool2 = ExAllocatePool2(257LL, 96LL, 1265072196LL);
        v13 = Pool2;
        if ( !Pool2 )
        {
LABEL_34:
          WdLogSingleEntry2(3LL, this, -1073741801LL);
          WdLogGlobalForLineNumber = 2971;
          goto LABEL_35;
        }
        *(_QWORD *)(Pool2 + 8) = this;
        *(_DWORD *)(Pool2 + 16) = 0;
        *(_QWORD *)(Pool2 + 24) = 0LL;
        *(_QWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        *(_QWORD *)(Pool2 + 56) = 0LL;
        *(_QWORD *)(Pool2 + 64) = 0LL;
        *(_DWORD *)(Pool2 + 72) = 0;
        *(_QWORD *)(Pool2 + 80) = 0LL;
        ExInitializeRundownProtection((PEX_RUNDOWN_REF)(Pool2 + 88));
      }
      v15 = *((_QWORD *)this + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v15 + 248));
      *(_DWORD *)(v13 + 16) = HMGRTABLE::AllocHandle((unsigned int *)(v15 + 280), v13, 5, 0, 1);
      DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v13);
      *(_QWORD *)(v15 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v15 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( *(_DWORD *)(v13 + 16) )
      {
        *(_QWORD *)(v13 + 40) = a4;
        if ( !*a5 )
          *a5 = (struct DXGALLOCATION *)v13;
        v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184)
          && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 8522;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"GetRenderCore()->IsCoreResourceSharedOwner()",
            8522LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_QWORD *)(v13 + 56) = 0LL;
        v18 = *a3;
        *(_QWORD *)(v13 + 64) = *a3;
        if ( v18 )
          *((_QWORD *)v18 + 7) = v13;
        *a3 = (struct DXGALLOCATION *)v13;
        if ( v27 )
        {
          v19 = (*(_DWORD *)(v13 + 72) & 0x40000) == 0;
          v16 = (DXGADAPTERALLOCATION_VGPU *)(v11 - 48);
          v11 = *(_QWORD *)(v11 + 8);
          *(_QWORD *)(v13 + 48) = v16;
          if ( !v19 )
            *(_DWORD *)(v13 + 120) = *((_DWORD *)v16 + 28);
          goto LABEL_36;
        }
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
        {
          v20 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x78uLL, 0x4B677844u, 256LL);
          if ( v20 )
          {
            v16 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v20);
            if ( v16 )
              goto LABEL_32;
          }
        }
        else
        {
          v21 = operator new(0x40uLL, 0x4B677844u, 256LL);
          v16 = (DXGADAPTERALLOCATION_VGPU *)v21;
          if ( v21 )
          {
            *(_DWORD *)(v21 + 4) = 0;
            *(_QWORD *)(v21 + 8) = 0LL;
            *(_QWORD *)(v21 + 16) = 0LL;
            *(_QWORD *)(v21 + 32) = 0LL;
            *(_DWORD *)(v21 + 40) = 0;
            *(_QWORD *)(v21 + 56) = 0LL;
            *(_QWORD *)(v21 + 48) = 0LL;
LABEL_32:
            v19 = (*(_DWORD *)(v13 + 72) & 0x40000) == 0;
            *(_QWORD *)(v13 + 48) = v16;
            if ( !v19 )
              *(_DWORD *)(v13 + 120) = *((_DWORD *)v16 + 28);
            goto LABEL_36;
          }
        }
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 3022;
      }
      else
      {
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 2982;
        DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v13);
      }
LABEL_35:
      v9 = -1073741801;
LABEL_36:
      if ( --v26 < 0 )
      {
        if ( v9 < 0 )
        {
          v22 = *a3;
          while ( v22 )
          {
            v23 = v22;
            v22 = (struct DXGALLOCATION *)*((_QWORD *)v22 + 8);
            ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v16, v23, 0LL);
            v24 = (DXGADAPTERALLOCATION *)*((_QWORD *)v23 + 6);
            if ( v24 && (!a4 || (*((_DWORD *)a4 + 1) & 1) == 0) )
              DXGADAPTERALLOCATION::`scalar deleting destructor'(v24);
            DXGALLOCATION::`scalar deleting destructor'(v23);
          }
          *a3 = 0LL;
        }
        return (unsigned int)v9;
      }
    }
  }
  return (unsigned int)v9;
}
