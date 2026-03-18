/*
 * XREFs of IopGraftName @ 0x140862214
 * Callers:
 *     IopSymlinkProcessReparse @ 0x140862168 (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkRemoveECP @ 0x14043FFF0 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x14044FBB0 (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140478170 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     IopCopyOverNewPathSecure @ 0x1406E939C (IopCopyOverNewPathSecure.c)
 *     IopSymlinkRememberJunction @ 0x1408625D4 (IopSymlinkRememberJunction.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1408626D8 (IopSymlinkGetRelatedMountPoint.c)
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 *     IopSymlinkApplyToOpenedName @ 0x1408EB7B0 (IopSymlinkApplyToOpenedName.c)
 *     IopSymlinkUpdateECP @ 0x1408EBA30 (IopSymlinkUpdateECP.c)
 *     IopGetFileInformation @ 0x1408ECAD0 (IopGetFileInformation.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408EDAA0 (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1408EDE00 (IopSymlinkInitializeSymlinkInfo.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408EFDB0 (FsRtlFreeExtraCreateParameter.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopGraftName(PIRP Irp, __int64 a2, int *a3)
{
  ULONG Flags; // ebx
  unsigned int v7; // esi
  const void **v8; // r13
  struct _ECP_LIST *UserBuffer; // rax
  int v10; // ebx
  _WORD *v11; // rdi
  __int64 v12; // r9
  bool v13; // cf
  NTSTATUS v14; // ebx
  signed int v15; // ecx
  unsigned __int64 v16; // rdx
  char v17; // r8
  int v18; // eax
  unsigned __int16 v19; // r15
  __int64 v20; // rdx
  __int64 RelatedMountPoint; // rax
  int v22; // r10d
  unsigned int v23; // ecx
  unsigned int v24; // r15d
  char *v25; // rax
  int v26; // ecx
  char *v27; // rsi
  _QWORD *v28; // r15
  __int64 v29; // r15
  NTSTATUS updated; // eax
  char *v31; // rax
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 Pool2; // rax
  int NameStringMode; // eax
  PVOID v39; // rdi
  unsigned int *v40; // rax
  _DWORD *v41; // r15
  int FileInformation; // eax
  unsigned int v43; // ecx
  unsigned int *v44; // rdi
  char *v45; // rbx
  char *v46; // rdi
  unsigned __int16 v47; // di
  unsigned int v48; // r13d
  __int64 v49; // rdx
  int v50; // [rsp+20h] [rbp-59h]
  unsigned __int16 v51; // [rsp+30h] [rbp-49h]
  PVOID EcpContext; // [rsp+50h] [rbp-29h] BYREF
  PVOID Object; // [rsp+58h] [rbp-21h]
  const void **v54; // [rsp+60h] [rbp-19h]
  unsigned __int16 *v55; // [rsp+68h] [rbp-11h]
  char *v56; // [rsp+70h] [rbp-9h]
  unsigned int *v57; // [rsp+78h] [rbp-1h]
  struct _ECP_LIST *v58; // [rsp+80h] [rbp+7h]
  PVOID P; // [rsp+88h] [rbp+Fh]
  PVOID v60; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v61; // [rsp+E8h] [rbp+6Fh]
  unsigned __int16 v62; // [rsp+F0h] [rbp+77h]
  __int64 v63; // [rsp+F8h] [rbp+7Fh] BYREF

  v61 = a2;
  Object = *(PVOID *)(a2 + 64);
  LODWORD(v63) = 0;
  v62 = 0;
  Flags = Irp->Flags;
  v7 = 0;
  v56 = 0LL;
  v8 = 0LL;
  EcpContext = 0LL;
  UserBuffer = 0LL;
  LOBYTE(v60) = 0;
  P = 0LL;
  v54 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v10 = Flags & 0x80;
  if ( v10 )
  {
    UserBuffer = (struct _ECP_LIST *)Irp->UserBuffer;
    v58 = UserBuffer;
  }
  IopSymlinkGetECP(UserBuffer, &EcpContext);
  v11 = EcpContext;
  v12 = 4194817LL;
  *((_WORD *)EcpContext + 1) |= 2u;
  v13 = v10 != 0;
  v14 = -1073741192;
  v15 = v13 ? 0 : 0xC000000D;
  if ( Irp->IoStatus.Status != 260 )
    v15 = -1073741192;
  v16 = Irp->IoStatus.Information - 2684354563u;
  if ( v16 > 0x16 || !_bittest64(&v12, v16) )
    v15 = -1073741192;
  v17 = 0;
  if ( !Irp->Tail.Overlay.AuxiliaryBuffer )
    v15 = -1073741192;
  if ( !a3 )
    v15 = -1073741192;
  if ( *((_WORD *)a3 + 3) >= 0x4000u )
    v15 = -1073741192;
  v18 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    v15 = -1073741192;
  if ( (unsigned int)(v18 + 1610612733) > 0x16 || !_bittest((const int *)&v12, v18 + 1610612733) )
    v15 = -1073741192;
  v55 = (unsigned __int16 *)(a2 + 88);
  if ( *(_WORD *)(a2 + 88) )
  {
    v14 = v15;
    if ( v15 < 0 )
    {
      v19 = 0;
      goto LABEL_21;
    }
    if ( v18 == -1610612733 )
    {
      v19 = *((_WORD *)a3 + 5);
      v20 = *((unsigned __int16 *)a3 + 3);
      v56 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 16;
      v62 = v19;
      goto LABEL_22;
    }
    if ( v18 != -1610612724 )
    {
      v14 = -1073741194;
      goto LABEL_18;
    }
    v19 = *((_WORD *)a3 + 5);
    v31 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 20;
    v62 = v19;
    v56 = v31;
    if ( (a3[4] & 1) != 0 )
    {
      v32 = 256;
      LOBYTE(v60) = 1;
      if ( !Object )
      {
LABEL_78:
        v19 = v62;
        goto LABEL_21;
      }
      v33 = *((_QWORD *)Object + 26);
      if ( v33 && *(_QWORD *)(v33 + 48) )
      {
LABEL_77:
        v11 = EcpContext;
        goto LABEL_78;
      }
      v36 = v61;
      while ( 1 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        v54 = (const void **)Pool2;
        v8 = (const void **)Pool2;
        if ( !Pool2 )
        {
          v14 = -1073741670;
          goto LABEL_18;
        }
        NameStringMode = ObQueryNameStringMode(*(_QWORD *)(v36 + 8), Pool2, v32, (unsigned int)&v63, 0);
        v17 = 0;
        v14 = NameStringMode;
        if ( NameStringMode >= 0 )
          break;
        if ( NameStringMode != -2147483643 )
          goto LABEL_77;
        v32 = v63;
        if ( (unsigned int)v63 >= 0xFFFF )
        {
LABEL_73:
          v14 = -1073741562;
          goto LABEL_74;
        }
        ExFreePoolWithTag(v8, 0);
      }
      v39 = Object;
      v7 = *v55 + *(unsigned __int16 *)v8 - *((unsigned __int16 *)a3 + 3);
      while ( 1 )
      {
        v40 = (unsigned int *)ExAllocatePool2(0x100uLL);
        P = v40;
        v41 = v40;
        if ( !v40 )
        {
          v14 = -1073741670;
          goto LABEL_74;
        }
        v57 = v40;
        FileInformation = IopGetFileInformation(v39, (__int64)&v63);
        v17 = 0;
        v14 = FileInformation;
        if ( FileInformation >= 0 )
          break;
        if ( FileInformation != -2147483643 )
          goto LABEL_77;
        if ( (unsigned int)(*v41 + 8) >= 0xFFFF )
          goto LABEL_73;
        ExFreePoolWithTag(v41, 0);
      }
      v43 = v7 + *v41;
      if ( v43 < v7 )
      {
        v14 = -1073741675;
        goto LABEL_74;
      }
      v11 = EcpContext;
      v7 += *v41;
      v19 = v62;
      if ( v43 < 0xFFFF )
      {
        v20 = *((unsigned __int16 *)a3 + 3);
        goto LABEL_22;
      }
      v14 = -1073741562;
    }
LABEL_21:
    v20 = *((unsigned __int16 *)a3 + 3);
    if ( v14 < 0 )
      goto LABEL_39;
LABEL_22:
    RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v11, v20);
    if ( !RelatedMountPoint )
      RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v11);
    v23 = *(unsigned __int16 *)(RelatedMountPoint + 16);
    if ( (_BYTE)v60 == v17 )
    {
LABEL_25:
      v24 = v7 + v19 + *((unsigned __int16 *)a3 + 3) + 4;
      if ( v24 >= 0xFFFF )
      {
        v14 = -1073741562;
      }
      else
      {
        v25 = (char *)ExAllocatePool2(0x100uLL);
        v26 = v14;
        v17 = 0;
        v27 = v25;
        if ( !v25 )
          v26 = -1073741670;
        LODWORD(v28) = v24 - 2;
        LODWORD(v55) = (_DWORD)v28;
        v14 = v26;
        if ( v26 >= 0 )
        {
          if ( !(_BYTE)v60 )
          {
            v29 = v61;
            v14 = IopCopyOverNewPathSecure(v25, v56, v62, v61, *((_WORD *)a3 + 3));
            if ( v14 < 0 )
            {
              ExFreePoolWithTag(v27, 0);
              goto LABEL_18;
            }
            if ( *a3 == -1610612733 )
              updated = IopSymlinkRememberJunction(*((unsigned __int16 *)a3 + 3), v29, Irp, v11);
            else
              updated = IopSymlinkUpdateECP(Irp, 0, v11[1] & 0xFFFE);
            v14 = updated;
            goto LABEL_34;
          }
          v60 = 0LL;
          if ( !Object )
            goto LABEL_98;
          v35 = *((_QWORD *)Object + 26);
          if ( v35 && *(_QWORD *)(v35 + 48) )
          {
            v11 = EcpContext;
LABEL_98:
            if ( !IopSymlinkGetRelatedMountPoint(v11, *((unsigned __int16 *)a3 + 3)) )
              IopSymlinkGetMostRecentlyUsedName((__int64)v11);
            v14 = IopSymlinkApplyToOpenedName(v61, v27, (__int16)v28);
            goto LABEL_40;
          }
          memmove(v27, v8[1], *(unsigned __int16 *)v8);
          v44 = v57;
          v45 = &v27[2 * ((unsigned __int64)*(unsigned __int16 *)v8 >> 1)];
          memmove(v45, v57 + 1, *v57);
          v46 = &v45[2 * ((unsigned __int64)*v44 >> 1)];
          if ( **(_WORD **)(v61 + 96) != 92 && *((_WORD *)v46 - 1) != 92 )
          {
            *(_WORD *)v46 = 92;
            LOWORD(v46) = (_WORD)v46 + 2;
          }
          v47 = (_WORD)v46 - (_WORD)v27;
          IopSymlinkRemoveECP(v58, &EcpContext);
          v28 = EcpContext;
          v48 = *((unsigned __int16 *)EcpContext + 8) + 2 + v47;
          if ( v48 < 0xFFFF )
          {
            v14 = IopSymlinkAllocateAndAddECP(Irp, &v60);
            if ( v14 >= 0 )
            {
              v49 = v48 + 32;
              v8 = v54;
              v51 = v47;
              v11 = v60;
              LOWORD(v50) = *(_WORD *)v28;
              IopSymlinkInitializeSymlinkInfo(
                v60,
                v49,
                v28[3],
                *((unsigned __int16 *)v28 + 8),
                v50,
                v27,
                v51,
                *(_WORD *)v54,
                *((_WORD *)v28 + 1),
                v28[1]);
              FsRtlFreeExtraCreateParameter(v28);
              LOWORD(v28) = (_WORD)v55;
              goto LABEL_98;
            }
          }
          else
          {
            v14 = -1073741562;
          }
          ExFreePoolWithTag(v27, 0);
          v8 = v54;
LABEL_40:
          if ( v8 )
LABEL_74:
            ExFreePoolWithTag(v8, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_34;
        }
      }
LABEL_39:
      if ( (_BYTE)v60 == v17 )
      {
LABEL_34:
        if ( v14 >= 0 )
          v14 = 260;
        goto LABEL_18;
      }
      goto LABEL_40;
    }
    if ( Object )
    {
      v34 = *((_QWORD *)Object + 26);
      if ( !v34 || !*(_QWORD *)(v34 + 48) )
      {
        v11 = EcpContext;
        v7 += v23;
LABEL_89:
        v7 += v22;
        goto LABEL_25;
      }
      v11 = EcpContext;
    }
    if ( v7 <= v23 )
      v7 = v23;
    goto LABEL_89;
  }
LABEL_18:
  Irp->IoStatus.Status = v14;
}
