/*
 * XREFs of PortPassThroughExSendAsync @ 0x1401B5774
 * Callers:
 *     NvmeAdapterPassThrough @ 0x14019A9EC (NvmeAdapterPassThrough.c)
 *     RaidAdapterPassThrough @ 0x1401B53BC (RaidAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughFreeSrb @ 0x14003240C (PortPassThroughFreeSrb.c)
 *     PortPassThroughNormalize @ 0x1400327CC (PortPassThroughNormalize.c)
 *     PortPassThroughBuildIrpEx @ 0x140032938 (PortPassThroughBuildIrpEx.c)
 *     PortpEnableCancel @ 0x1400367E4 (PortpEnableCancel.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x14003682C (PortpPassThroughZeroUnusedBuffers.c)
 *     PortPassThroughFreeIrpEx @ 0x1400378D4 (PortPassThroughFreeIrpEx.c)
 *     PortPassThroughExBasicValidation @ 0x140042A00 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x14013B070 (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExValidate @ 0x14013B194 (PortPassThroughExValidate.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     PortPassThroughExBuildSrbEx @ 0x1401B411C (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1401B446C (PortPassThroughExGetDataBuffers.c)
 */

__int64 __fastcall PortPassThroughExSendAsync(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        void (__fastcall *a7)(IRP *, __int64),
        __int64 a8)
{
  void *v8; // r13
  unsigned int *v12; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  void *v14; // r14
  int v15; // ecx
  int v16; // eax
  char *v17; // r14
  ULONG v18; // r15d
  int v19; // ebx
  _IO_STACK_LOCATION *v20; // rax
  unsigned __int64 Options; // r9
  unsigned __int64 Length; // r8
  unsigned int v23; // edx
  char *v24; // rcx
  KPROCESSOR_MODE RequestorMode; // al
  PIRP v26; // rbx
  _WORD *Pool2; // rsi
  unsigned __int8 v28; // dl
  int v29; // eax
  __int64 v30; // rax
  void (__fastcall *v31)(IRP *, __int64); // r14
  _IO_STACK_LOCATION *v32; // rax
  unsigned int v33; // r15d
  IRP *v34; // rdx
  __int64 v36; // rdx
  int v37; // ebx
  unsigned int v38; // ecx
  __int64 v39; // rsi
  PDEVICE_OBJECT v40; // r13
  KPROCESSOR_MODE v41; // r10
  ULONG v42; // r8d
  PIRP v43; // rdx
  PIRP v44; // r13
  unsigned int *v45; // rax
  __int64 v46; // rax
  _IO_STACK_LOCATION *v47; // rax
  __int64 v48; // rdx
  int AccessMode; // [rsp+20h] [rbp-A9h]
  int v51[2]; // [rsp+60h] [rbp-69h] BYREF
  PIRP Irp; // [rsp+68h] [rbp-61h] BYREF
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-59h] BYREF
  __int64 v54; // [rsp+78h] [rbp-51h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-49h]
  int v56[4]; // [rsp+88h] [rbp-41h] BYREF
  __int128 v57; // [rsp+98h] [rbp-31h]
  __int128 Src; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-11h]

  v8 = 0LL;
  DeviceObject = a1;
  v54 = a8;
  v12 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v14 = 0LL;
  *(_QWORD *)v51 = 0LL;
  Irp = 0LL;
  v15 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460;
  MemoryDescriptorList = 0LL;
  if ( (v15 & 0xFFFFFFFB) != 0 )
  {
    *(_OWORD *)v56 = 0LL;
    v59 = 0LL;
    v57 = 0LL;
    Src = 0LL;
    v16 = PortPassThroughNormalize((__int64)v56, a2);
    v17 = (char *)*((_QWORD *)&v57 + 1);
    v18 = v56[3];
    v19 = v16;
    if ( v16 >= 0 )
    {
      v20 = a2->Tail.Overlay.CurrentStackLocation;
      Options = v20->Parameters.Create.Options;
      Length = v20->Parameters.Read.Length;
      if ( BYTE2(v56[1]) > 0x10u )
        goto LABEL_44;
      if ( HIBYTE(v56[1]) )
      {
        v23 = Src + HIBYTE(v56[1]);
        if ( v23 < (unsigned int)Src
          || LOWORD(v56[0]) > (unsigned int)Src
          || !a3
          && v56[3]
          && ((unsigned __int64)(unsigned int)Src >= *((_QWORD *)&v57 + 1)
           || (unsigned __int64)v23 > *((_QWORD *)&v57 + 1)) )
        {
          goto LABEL_44;
        }
        if ( (unsigned int)Src > (unsigned int)Length || v23 > (unsigned int)Length )
          goto LABEL_44;
      }
      if ( a3 )
      {
        if ( !*((_QWORD *)&v57 + 1) && v56[3] )
        {
LABEL_44:
          v19 = -1073741811;
          goto LABEL_45;
        }
      }
      else if ( (unsigned __int64)LOWORD(v56[0]) > *((_QWORD *)&v57 + 1) && v56[3]
             || LOBYTE(v56[2]) != 1
             && v56[3]
             && (*((_QWORD *)&v57 + 1) > Options
              || *((_QWORD *)&v57 + 1) + (unsigned __int64)(unsigned int)v56[3] > Options)
             || LOBYTE(v56[2])
             && v56[3]
             && (*((_QWORD *)&v57 + 1) > Length
              || *((_QWORD *)&v57 + 1) + (unsigned __int64)(unsigned int)v56[3] > Length) )
      {
        goto LABEL_44;
      }
      if ( (unsigned int)(v57 - 1) > 0x1A5DF )
        goto LABEL_44;
      if ( (unsigned __int8)(BYTE4(Src) - 57) <= 1u || BYTE4(Src) == 24 )
      {
        v19 = -1073741808;
        goto LABEL_45;
      }
      v19 = 0;
      PortpPassThroughZeroUnusedBuffers((__int64)a2);
      if ( v18 )
      {
        if ( a3 )
          LODWORD(v24) = (_DWORD)v17;
        else
          v24 = &v17[(unsigned __int64)a2->AssociatedIrp.MasterIrp];
      }
      else
      {
        LODWORD(v24) = 0;
      }
      if ( (a1->AlignmentRequirement & (unsigned int)v24) != 0
        || v18
        && ((unsigned int)((v18 + 4095LL + (unsigned __int64)((unsigned __int16)v24 & 0xFFF)) >> 12) > a5 || v18 > a6) )
      {
        goto LABEL_44;
      }
    }
    if ( v19 < 0 )
    {
LABEL_45:
      v31 = a7;
LABEL_46:
      v36 = v54;
      a2->IoStatus.Status = v19;
      v31(a2, v36);
      return (unsigned int)v19;
    }
    if ( v18 )
    {
      if ( !a3 )
      {
        v17 += (unsigned __int64)a2->AssociatedIrp.MasterIrp;
LABEL_26:
        RequestorMode = 0;
        goto LABEL_29;
      }
    }
    else
    {
      v17 = 0LL;
      if ( !a3 )
        goto LABEL_26;
    }
    RequestorMode = a2->RequestorMode;
LABEL_29:
    Irp = PortPassThroughBuildIrpEx((__int64)a1, v17, v18, LOBYTE(v56[2]) != 0, RequestorMode, a2, 0, 0LL, 0, 0LL);
    v26 = Irp;
    if ( !Irp )
    {
      v19 = -1073741670;
      goto LABEL_45;
    }
    *(_QWORD *)v51 = 0LL;
    Pool2 = (_WORD *)ExAllocatePool2(64LL, 88LL, 1766878288LL);
    if ( Pool2 )
    {
      if ( !HIBYTE(v56[1]) || (*(_QWORD *)v51 = ExAllocatePool2(72LL, HIBYTE(v56[1]), 1766878288LL)) != 0LL )
      {
        memset_0(Pool2, 0, 0x58uLL);
        v28 = BYTE2(v56[1]);
        *((_BYTE *)Pool2 + 5) = HIBYTE(v56[0]);
        Pool2[3] = v56[1];
        *((_BYTE *)Pool2 + 11) = HIBYTE(v56[1]);
        *Pool2 = 88;
        *((_BYTE *)Pool2 + 10) = v28;
        if ( v18 )
        {
          if ( LOBYTE(v56[2]) )
          {
            if ( LOBYTE(v56[2]) == 1 )
              v29 = 64;
            else
              v29 = 192;
          }
          else
          {
            v29 = 128;
          }
        }
        else
        {
          v29 = 0;
        }
        if ( !*(_QWORD *)v51 )
          v29 |= 0x20u;
        *((_QWORD *)Pool2 + 4) = *(_QWORD *)v51;
        *((_DWORD *)Pool2 + 3) = v29 | 0x2000100;
        *((_DWORD *)Pool2 + 5) = v57;
        *((_DWORD *)Pool2 + 4) = v18;
        *((_QWORD *)Pool2 + 3) = v17;
        memmove(Pool2 + 36, (char *)&Src + 4, v28);
        v26->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Pool2;
        *((_QWORD *)Pool2 + 6) = v26;
        v30 = ExAllocatePool2(64LL, 48LL, 1766878288LL);
        v31 = a7;
        v8 = (void *)v30;
        if ( v30 )
        {
          *(_BYTE *)v30 = a3;
          *(_QWORD *)(v30 + 24) = Pool2;
          *(_QWORD *)(v30 + 8) = v26;
          *(_QWORD *)(v30 + 16) = a2;
          *(_QWORD *)(v30 + 32) = a7;
          *(_QWORD *)(v30 + 40) = v54;
          v32 = v26->Tail.Overlay.CurrentStackLocation;
          v32[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
          v32[-1].Context = v8;
          v32[-1].Control = -32;
          v33 = 259;
          v19 = PortpEnableCancel((__int64)a2, (__int64)v8);
          if ( v19 == 259 )
          {
            v34 = Irp;
LABEL_42:
            IofCallDriver(DeviceObject, v34);
            return v33;
          }
LABEL_52:
          PortPassThroughFreeIrpEx(Irp);
          if ( Pool2 )
            PortPassThroughFreeSrb(Pool2);
          if ( v8 )
            ExFreePoolWithTag(v8, 0x69506C50u);
          goto LABEL_46;
        }
LABEL_51:
        v19 = -1073741670;
        goto LABEL_52;
      }
      ExFreePoolWithTag(Pool2, 0x69506C50u);
      Pool2 = 0LL;
    }
    v31 = a7;
    goto LABEL_51;
  }
  v37 = PortPassThroughExBasicValidation(a2);
  if ( v37 >= 0 )
  {
    v38 = LODWORD(a2->AssociatedIrp.MasterIrp->MdlAddress) + 63;
    if ( v38 < 0x40 )
    {
      v37 = -1073741675;
    }
    else
    {
      v39 = ExAllocatePool2(64LL, v38, 1766878288LL);
      if ( v39 )
      {
        v40 = DeviceObject;
        v37 = PortPassThroughExValidate((__int64)DeviceObject, a2, a3, a5, a6, (unsigned int *)v39);
        if ( v37 >= 0 )
        {
          PortPassThroughExGetDataBuffers(v39, (__int64)a2, a3, v51, &Irp);
          if ( a3 )
            v41 = a2->RequestorMode;
          else
            v41 = 0;
          if ( *(_QWORD *)v51 )
            v42 = *(_DWORD *)(v39 + 32);
          else
            v42 = *(_DWORD *)(v39 + 36);
          v43 = Irp;
          if ( *(_QWORD *)v51 )
            v43 = *(PIRP *)v51;
          v44 = PortPassThroughBuildIrpEx(
                  (__int64)v40,
                  v43,
                  v42,
                  *(_BYTE *)(v39 + 18) == 1,
                  v41,
                  a2,
                  *(_BYTE *)(v39 + 18) == 3,
                  Irp,
                  *(_DWORD *)(v39 + 36),
                  &MemoryDescriptorList);
          if ( v44
            && (v45 = PortPassThroughExBuildSrbEx(
                        a2,
                        v39,
                        *(__int64 *)v51,
                        (__int64)Irp,
                        AccessMode,
                        (__int64)MemoryDescriptorList),
                *(_QWORD *)v51 = v45,
                (v12 = v45) != 0LL)
            && (*((_QWORD *)v45 + 10) = v44,
                v44->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v45,
                v46 = ExAllocatePool2(64LL, 48LL, 1766878288LL),
                (v14 = (void *)v46) != 0LL) )
          {
            *(_QWORD *)(v46 + 24) = v12;
            *(_QWORD *)(v46 + 8) = v44;
            *(_BYTE *)v46 = a3;
            *(_QWORD *)(v46 + 16) = a2;
            *(_QWORD *)(v46 + 32) = a7;
            *(_QWORD *)(v46 + 40) = v54;
            v47 = v44->Tail.Overlay.CurrentStackLocation;
            v47[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
            v47[-1].Context = v14;
            v47[-1].Control = -32;
            v33 = 259;
            v37 = PortpEnableCancel((__int64)a2, (__int64)v14);
            if ( v37 == 259 )
            {
              ExFreePoolWithTag((PVOID)v39, 0x69506C50u);
              v34 = v44;
              goto LABEL_42;
            }
            v12 = *(unsigned int **)v51;
          }
          else
          {
            v37 = -1073741670;
          }
          if ( MemoryDescriptorList )
          {
            MmUnlockPages(MemoryDescriptorList);
            IoFreeMdl(MemoryDescriptorList);
          }
          if ( v44 )
            PortPassThroughFreeIrpEx(v44);
          if ( v12 )
            PortPassThroughExFreeSrbEx(v12);
          if ( v14 )
            ExFreePoolWithTag(v14, 0x69506C50u);
        }
        ExFreePoolWithTag((PVOID)v39, 0x69506C50u);
      }
      else
      {
        v37 = -1073741670;
      }
    }
  }
  v48 = v54;
  a2->IoStatus.Status = v37;
  a7(a2, v48);
  return (unsigned int)v37;
}
