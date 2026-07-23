/*
 * XREFs of IopGraftName @ 0x140A2F1E8
 * Callers:
 *     IopSymlinkProcessReparse @ 0x140A2F13C (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkRemoveECP @ 0x140436270 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x140446838 (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140474550 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1408AB5B0 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408AB7E0 (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkUpdateECP @ 0x1408ABA8C (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1408ACA10 (IopSymlinkRememberJunction.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1408ACB14 (IopSymlinkGetRelatedMountPoint.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x140957CC0 (IopGetFileInformation.c)
 *     IopSymlinkApplyToOpenedName @ 0x1409C6EF4 (IopSymlinkApplyToOpenedName.c)
 *     IopCopyOverNewPathSecure @ 0x140A2F5A8 (IopCopyOverNewPathSecure.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopGraftName(PIRP Irp, __int64 a2, __int64 a3)
{
  ULONG Flags; // ebx
  unsigned int v7; // esi
  const void **v8; // r13
  struct _ECP_LIST *UserBuffer; // rax
  int v10; // ebx
  UNICODE_STRING *v11; // rdi
  __int64 v12; // r9
  bool v13; // cf
  NTSTATUS v14; // ebx
  signed int v15; // ecx
  unsigned __int64 v16; // rdx
  char v17; // r8
  int v18; // eax
  unsigned __int16 v19; // r15
  unsigned __int16 v20; // dx
  __int64 RelatedMountPoint; // rax
  int v22; // r10d
  unsigned int v23; // ecx
  unsigned int v24; // r15d
  char *v25; // rax
  int v26; // ecx
  char *v27; // rsi
  PVOID v28; // r15
  __int64 v29; // r15
  NTSTATUS updated; // eax
  __int64 v31; // rax
  unsigned int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 Pool2; // rax
  int v38; // eax
  ULONG v39; // ebx
  struct _FILE_OBJECT *v40; // rdi
  struct _IRP *v41; // rax
  struct _IRP *v42; // r15
  int FileInformation; // eax
  unsigned int v44; // ecx
  struct _IRP *v45; // rdi
  char *v46; // rbx
  char *v47; // rdi
  unsigned __int16 v48; // di
  int v49; // ecx
  unsigned int v50; // r13d
  __int16 v51; // dx
  __int64 MostRecentlyUsedName; // rax
  unsigned __int16 v53; // [rsp+30h] [rbp-49h]
  PVOID EcpContext; // [rsp+50h] [rbp-29h] BYREF
  PVOID Object; // [rsp+58h] [rbp-21h]
  __int16 *v56; // [rsp+60h] [rbp-19h]
  unsigned __int16 *v57; // [rsp+68h] [rbp-11h]
  __int64 v58; // [rsp+70h] [rbp-9h]
  struct _IRP *v59; // [rsp+78h] [rbp-1h]
  struct _ECP_LIST *v60; // [rsp+80h] [rbp+7h]
  PVOID P; // [rsp+88h] [rbp+Fh]
  PVOID v62; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v63; // [rsp+E8h] [rbp+6Fh]
  unsigned __int16 v64; // [rsp+F0h] [rbp+77h]
  __int64 v65; // [rsp+F8h] [rbp+7Fh] BYREF

  v63 = a2;
  Object = *(PVOID *)(a2 + 64);
  LODWORD(v65) = 0;
  v64 = 0;
  Flags = Irp->Flags;
  v7 = 0;
  v58 = 0LL;
  v8 = 0LL;
  EcpContext = 0LL;
  UserBuffer = 0LL;
  LOBYTE(v62) = 0;
  P = 0LL;
  v56 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v10 = Flags & 0x80;
  if ( v10 )
  {
    UserBuffer = (struct _ECP_LIST *)Irp->UserBuffer;
    v60 = UserBuffer;
  }
  IopSymlinkGetECP(UserBuffer, &EcpContext);
  v11 = (UNICODE_STRING *)EcpContext;
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
  if ( *(_WORD *)(a3 + 6) >= 0x4000u )
    v15 = -1073741192;
  v18 = *(_DWORD *)a3;
  if ( *(_WORD *)(a3 + 4) >= 0x4000u )
    v15 = -1073741192;
  if ( (unsigned int)(v18 + 1610612733) > 0x16 || !_bittest((const int *)&v12, v18 + 1610612733) )
    v15 = -1073741192;
  v57 = (unsigned __int16 *)(a2 + 88);
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
      v19 = *(_WORD *)(a3 + 10);
      v20 = *(_WORD *)(a3 + 6);
      v58 = a3 + *(unsigned __int16 *)(a3 + 8) + 16LL;
      v64 = v19;
      goto LABEL_22;
    }
    if ( v18 != -1610612724 )
    {
      v14 = -1073741194;
      goto LABEL_18;
    }
    v19 = *(_WORD *)(a3 + 10);
    v31 = a3 + *(unsigned __int16 *)(a3 + 8) + 20LL;
    v64 = v19;
    v58 = v31;
    if ( (*(_DWORD *)(a3 + 16) & 1) != 0 )
    {
      v32 = 256;
      LOBYTE(v62) = 1;
      if ( !Object )
      {
LABEL_78:
        v19 = v64;
        goto LABEL_21;
      }
      v33 = *((_QWORD *)Object + 26);
      if ( v33 && *(_QWORD *)(v33 + 48) )
      {
LABEL_77:
        v11 = (UNICODE_STRING *)EcpContext;
        goto LABEL_78;
      }
      v36 = v63;
      while ( 1 )
      {
        Pool2 = ExAllocatePool2(0x100uLL, v32, 0x63466F49u);
        v56 = (__int16 *)Pool2;
        v8 = (const void **)Pool2;
        if ( !Pool2 )
        {
          v14 = -1073741670;
          goto LABEL_18;
        }
        v38 = ObQueryNameStringMode(*(char **)(v36 + 8), Pool2, v32, &v65, 0);
        v17 = 0;
        v14 = v38;
        if ( v38 >= 0 )
          break;
        if ( v38 != -2147483643 )
          goto LABEL_77;
        v32 = v65;
        if ( (unsigned int)v65 >= 0xFFFF )
        {
LABEL_73:
          v14 = -1073741562;
          goto LABEL_74;
        }
        ExFreePoolWithTag(v8, 0);
      }
      v39 = 256;
      v40 = (struct _FILE_OBJECT *)Object;
      v7 = *v57 + *(unsigned __int16 *)v8 - *(unsigned __int16 *)(a3 + 6);
      while ( 1 )
      {
        v41 = (struct _IRP *)ExAllocatePool2(0x100uLL, v39, 0x63466F49u);
        P = v41;
        v42 = v41;
        if ( !v41 )
        {
          v14 = -1073741670;
          goto LABEL_74;
        }
        v59 = v41;
        FileInformation = IopGetFileInformation(v40, v39, 9u, v41, &v65);
        v17 = 0;
        v14 = FileInformation;
        if ( FileInformation >= 0 )
          break;
        if ( FileInformation != -2147483643 )
          goto LABEL_77;
        v39 = *(_DWORD *)&v42->Type + 8;
        if ( v39 >= 0xFFFF )
          goto LABEL_73;
        ExFreePoolWithTag(v42, 0);
      }
      v44 = v7 + *(_DWORD *)&v42->Type;
      if ( v44 < v7 )
      {
        v14 = -1073741675;
        goto LABEL_74;
      }
      v11 = (UNICODE_STRING *)EcpContext;
      v7 += *(_DWORD *)&v42->Type;
      v19 = v64;
      if ( v44 < 0xFFFF )
      {
        v20 = *(_WORD *)(a3 + 6);
        goto LABEL_22;
      }
      v14 = -1073741562;
    }
LABEL_21:
    v20 = *(_WORD *)(a3 + 6);
    if ( v14 < 0 )
      goto LABEL_39;
LABEL_22:
    RelatedMountPoint = IopSymlinkGetRelatedMountPoint((__int64)v11, v20);
    if ( !RelatedMountPoint )
      RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v11);
    v23 = *(unsigned __int16 *)(RelatedMountPoint + 16);
    if ( (_BYTE)v62 == v17 )
    {
LABEL_25:
      v24 = v7 + v19 + *(unsigned __int16 *)(a3 + 6) + 4;
      if ( v24 >= 0xFFFF )
      {
        v14 = -1073741562;
      }
      else
      {
        v25 = (char *)ExAllocatePool2(0x100uLL, v24, 0x63466F49u);
        v26 = v14;
        v17 = 0;
        v27 = v25;
        if ( !v25 )
          v26 = -1073741670;
        LODWORD(v28) = v24 - 2;
        LODWORD(v57) = (_DWORD)v28;
        v14 = v26;
        if ( v26 >= 0 )
        {
          if ( !(_BYTE)v62 )
          {
            v29 = v63;
            v14 = IopCopyOverNewPathSecure(v25, *(_WORD *)(a3 + 6));
            if ( v14 < 0 )
            {
              ExFreePoolWithTag(v27, 0);
              goto LABEL_18;
            }
            if ( *(_DWORD *)a3 == -1610612733 )
              updated = IopSymlinkRememberJunction(*(_WORD *)(a3 + 6), v29, (__int64)Irp, v11);
            else
              updated = IopSymlinkUpdateECP(
                          Irp,
                          v11,
                          0,
                          (const UNICODE_STRING *)(v29 + 88),
                          0,
                          v11->MaximumLength & 0xFFFE);
            v14 = updated;
            goto LABEL_34;
          }
          v62 = 0LL;
          if ( !Object )
            goto LABEL_98;
          v35 = *((_QWORD *)Object + 26);
          if ( v35 && *(_QWORD *)(v35 + 48) )
          {
            v11 = (UNICODE_STRING *)EcpContext;
LABEL_98:
            MostRecentlyUsedName = IopSymlinkGetRelatedMountPoint((__int64)v11, *(_WORD *)(a3 + 6));
            if ( !MostRecentlyUsedName )
              MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v11);
            v14 = IopSymlinkApplyToOpenedName(v63, MostRecentlyUsedName, a3, Irp, v27, (__int16)v28);
            goto LABEL_40;
          }
          memmove(v27, v8[1], *(unsigned __int16 *)v8);
          v45 = v59;
          v46 = &v27[2 * ((unsigned __int64)*(unsigned __int16 *)v8 >> 1)];
          memmove(v46, &v59->Size + 1, *(unsigned int *)&v59->Type);
          v47 = &v46[2 * ((unsigned __int64)*(unsigned int *)&v45->Type >> 1)];
          if ( **(_WORD **)(v63 + 96) != 92 && *((_WORD *)v47 - 1) != 92 )
          {
            *(_WORD *)v47 = 92;
            LOWORD(v47) = (_WORD)v47 + 2;
          }
          v48 = (_WORD)v47 - (_WORD)v27;
          IopSymlinkRemoveECP(v60, &EcpContext);
          v28 = EcpContext;
          v49 = *((unsigned __int16 *)EcpContext + 8) + 2;
          v50 = v49 + v48;
          if ( v50 < 0xFFFF )
          {
            v14 = IopSymlinkAllocateAndAddECP(Irp, &v62, (unsigned __int16)v49 + v48);
            if ( v14 >= 0 )
            {
              v51 = v50 + 32;
              v8 = (const void **)v56;
              v53 = v48;
              v11 = (UNICODE_STRING *)v62;
              IopSymlinkInitializeSymlinkInfo(
                (__int64)v62,
                v51,
                *((const void **)v28 + 3),
                *((_WORD *)v28 + 8),
                *(_WORD *)v28,
                v27,
                v53,
                *v56,
                *((_WORD *)v28 + 1),
                *((_QWORD *)v28 + 1));
              FsRtlFreeExtraCreateParameter(v28);
              LOWORD(v28) = (_WORD)v57;
              goto LABEL_98;
            }
          }
          else
          {
            v14 = -1073741562;
          }
          ExFreePoolWithTag(v27, 0);
          v8 = (const void **)v56;
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
      if ( (_BYTE)v62 == v17 )
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
        v11 = (UNICODE_STRING *)EcpContext;
        v7 += v23;
LABEL_89:
        v7 += v22;
        goto LABEL_25;
      }
      v11 = (UNICODE_STRING *)EcpContext;
    }
    if ( v7 <= v23 )
      v7 = v23;
    goto LABEL_89;
  }
LABEL_18:
  Irp->IoStatus.Status = v14;
}
