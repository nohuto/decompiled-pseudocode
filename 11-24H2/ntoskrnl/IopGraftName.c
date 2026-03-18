/*
 * XREFs of IopGraftName @ 0x14099D348
 * Callers:
 *     IopSymlinkProcessReparse @ 0x14099D29C (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkRemoveECP @ 0x14043FFB0 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x1404513D8 (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140477F50 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408A2A00 (FsRtlFreeExtraCreateParameter.c)
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x14096E140 (IopGetFileInformation.c)
 *     IopSymlinkRememberJunction @ 0x14099D708 (IopSymlinkRememberJunction.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x14099D80C (IopSymlinkGetRelatedMountPoint.c)
 *     IopCopyOverNewPathSecure @ 0x14099D844 (IopCopyOverNewPathSecure.c)
 *     IopSymlinkApplyToOpenedName @ 0x14099D944 (IopSymlinkApplyToOpenedName.c)
 *     IopSymlinkUpdateECP @ 0x14099DACC (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14099DED8 (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140A2C6B0 (IopSymlinkInitializeSymlinkInfo.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned int v49; // r13d
  __int64 v50; // rdx
  int v51; // [rsp+20h] [rbp-59h]
  unsigned __int16 v52; // [rsp+30h] [rbp-49h]
  PVOID EcpContext; // [rsp+50h] [rbp-29h] BYREF
  PVOID Object; // [rsp+58h] [rbp-21h]
  const void **v55; // [rsp+60h] [rbp-19h]
  unsigned __int16 *v56; // [rsp+68h] [rbp-11h]
  __int64 v57; // [rsp+70h] [rbp-9h]
  struct _IRP *v58; // [rsp+78h] [rbp-1h]
  struct _ECP_LIST *v59; // [rsp+80h] [rbp+7h]
  PVOID P; // [rsp+88h] [rbp+Fh]
  PVOID v61; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v62; // [rsp+E8h] [rbp+6Fh]
  unsigned __int16 v63; // [rsp+F0h] [rbp+77h]
  __int64 v64; // [rsp+F8h] [rbp+7Fh] BYREF

  v62 = a2;
  Object = *(PVOID *)(a2 + 64);
  LODWORD(v64) = 0;
  v63 = 0;
  Flags = Irp->Flags;
  v7 = 0;
  v57 = 0LL;
  v8 = 0LL;
  EcpContext = 0LL;
  UserBuffer = 0LL;
  LOBYTE(v61) = 0;
  P = 0LL;
  v55 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v10 = Flags & 0x80;
  if ( v10 )
  {
    UserBuffer = (struct _ECP_LIST *)Irp->UserBuffer;
    v59 = UserBuffer;
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
  v56 = (unsigned __int16 *)(a2 + 88);
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
      v57 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 16;
      v63 = v19;
      goto LABEL_22;
    }
    if ( v18 != -1610612724 )
    {
      v14 = -1073741194;
      goto LABEL_18;
    }
    v19 = *((_WORD *)a3 + 5);
    v31 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 20;
    v63 = v19;
    v57 = v31;
    if ( (a3[4] & 1) != 0 )
    {
      v32 = 256;
      LOBYTE(v61) = 1;
      if ( !Object )
      {
LABEL_78:
        v19 = v63;
        goto LABEL_21;
      }
      v33 = *((_QWORD *)Object + 26);
      if ( v33 && *(_QWORD *)(v33 + 48) )
      {
LABEL_77:
        v11 = EcpContext;
        goto LABEL_78;
      }
      v36 = v62;
      while ( 1 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        v55 = (const void **)Pool2;
        v8 = (const void **)Pool2;
        if ( !Pool2 )
        {
          v14 = -1073741670;
          goto LABEL_18;
        }
        v38 = ObQueryNameStringMode(*(char **)(v36 + 8), Pool2, v32, &v64, 0);
        v17 = 0;
        v14 = v38;
        if ( v38 >= 0 )
          break;
        if ( v38 != -2147483643 )
          goto LABEL_77;
        v32 = v64;
        if ( (unsigned int)v64 >= 0xFFFF )
        {
LABEL_73:
          v14 = -1073741562;
          goto LABEL_74;
        }
        ExFreePoolWithTag(v8, 0);
      }
      v39 = 256;
      v40 = (struct _FILE_OBJECT *)Object;
      v7 = *v56 + *(unsigned __int16 *)v8 - *((unsigned __int16 *)a3 + 3);
      while ( 1 )
      {
        v41 = (struct _IRP *)ExAllocatePool2(0x100uLL);
        P = v41;
        v42 = v41;
        if ( !v41 )
        {
          v14 = -1073741670;
          goto LABEL_74;
        }
        v58 = v41;
        FileInformation = IopGetFileInformation(v40, v39, 9u, v41, &v64);
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
      v11 = EcpContext;
      v7 += *(_DWORD *)&v42->Type;
      v19 = v63;
      if ( v44 < 0xFFFF )
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
    if ( (_BYTE)v61 == v17 )
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
        LODWORD(v56) = (_DWORD)v28;
        v14 = v26;
        if ( v26 >= 0 )
        {
          if ( !(_BYTE)v61 )
          {
            v29 = v62;
            v14 = IopCopyOverNewPathSecure(v25, *((_WORD *)a3 + 3));
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
          v61 = 0LL;
          if ( !Object )
            goto LABEL_98;
          v35 = *((_QWORD *)Object + 26);
          if ( v35 && *(_QWORD *)(v35 + 48) )
          {
            v11 = EcpContext;
LABEL_98:
            if ( !IopSymlinkGetRelatedMountPoint(v11, *((unsigned __int16 *)a3 + 3)) )
              IopSymlinkGetMostRecentlyUsedName((__int64)v11);
            v14 = IopSymlinkApplyToOpenedName(v62, v27, (__int16)v28);
            goto LABEL_40;
          }
          memmove(v27, v8[1], *(unsigned __int16 *)v8);
          v45 = v58;
          v46 = &v27[2 * ((unsigned __int64)*(unsigned __int16 *)v8 >> 1)];
          memmove(v46, &v58->Size + 1, *(unsigned int *)&v58->Type);
          v47 = &v46[2 * ((unsigned __int64)*(unsigned int *)&v45->Type >> 1)];
          if ( **(_WORD **)(v62 + 96) != 92 && *((_WORD *)v47 - 1) != 92 )
          {
            *(_WORD *)v47 = 92;
            LOWORD(v47) = (_WORD)v47 + 2;
          }
          v48 = (_WORD)v47 - (_WORD)v27;
          IopSymlinkRemoveECP(v59, &EcpContext);
          v28 = EcpContext;
          v49 = *((unsigned __int16 *)EcpContext + 8) + 2 + v48;
          if ( v49 < 0xFFFF )
          {
            v14 = IopSymlinkAllocateAndAddECP(Irp, &v61);
            if ( v14 >= 0 )
            {
              v50 = v49 + 32;
              v8 = v55;
              v52 = v48;
              v11 = v61;
              LOWORD(v51) = *(_WORD *)v28;
              IopSymlinkInitializeSymlinkInfo(
                v61,
                v50,
                v28[3],
                *((unsigned __int16 *)v28 + 8),
                v51,
                v27,
                v52,
                *(_WORD *)v55,
                *((_WORD *)v28 + 1),
                v28[1]);
              FsRtlFreeExtraCreateParameter(v28);
              LOWORD(v28) = (_WORD)v56;
              goto LABEL_98;
            }
          }
          else
          {
            v14 = -1073741562;
          }
          ExFreePoolWithTag(v27, 0);
          v8 = v55;
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
      if ( (_BYTE)v61 == v17 )
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
