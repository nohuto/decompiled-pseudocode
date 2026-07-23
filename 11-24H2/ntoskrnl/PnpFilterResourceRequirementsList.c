/*
 * XREFs of PnpFilterResourceRequirementsList @ 0x140978308
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x140978BD8 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopQueryDeviceResources @ 0x140978EDC (IopQueryDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x14048FE80 (RtlCmDecodeMemIoResource.c)
 *     RtlIoDecodeMemIoResource @ 0x1405E7030 (RtlIoDecodeMemIoResource.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpCmResourcesToIoResources @ 0x140731264 (PnpCmResourcesToIoResources.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpFilterResourceRequirementsList(unsigned int *Src, unsigned int *a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // r12
  int v8; // r15d
  _DWORD *Pool2; // rax
  _DWORD *v10; // r13
  unsigned int *v12; // rdi
  __int64 v13; // r11
  unsigned __int8 *v14; // rcx
  unsigned int v15; // eax
  __int64 i; // r10
  unsigned int v17; // r9d
  _DWORD *v18; // r14
  int v19; // r9d
  int v20; // r10d
  _DWORD *v21; // rdx
  _DWORD *v22; // r8
  bool v23; // zf
  int v24; // ecx
  int v25; // edx
  __int64 v26; // r11
  struct _IO_RESOURCE_DESCRIPTOR *v27; // r9
  unsigned __int64 v28; // r8
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // rax
  int v30; // r10d
  unsigned int v31; // ecx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v32; // r11
  ULONG v33; // r15d
  struct _IO_RESOURCE_DESCRIPTOR *j; // rdi
  int ShareDisposition; // eax
  ULONGLONG Vector; // r12
  int v37; // edx
  unsigned __int8 v38; // cl
  int v39; // r11d
  ULONGLONG Length; // r9
  ULONGLONG v41; // r8
  unsigned __int64 v42; // r10
  ULONGLONG v43; // rdx
  ULONGLONG v44; // rax
  ULONGLONG v45; // rax
  struct _IO_RESOURCE_DESCRIPTOR *k; // rax
  struct _IO_RESOURCE_DESCRIPTOR *n; // rax
  __int64 LowPart; // rax
  int v49; // ecx
  UCHAR v50; // cl
  struct _IO_RESOURCE_DESCRIPTOR *m; // rdi
  int v52; // eax
  unsigned int v53; // edi
  unsigned int *v54; // rax
  unsigned int *v55; // rdx
  unsigned int v56; // eax
  _DWORD *v57; // r10
  bool v58; // sf
  int v59; // edi
  _DWORD *v60; // r11
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // r9
  _DWORD *v63; // rcx
  _DWORD *v64; // r10
  int v65; // [rsp+28h] [rbp-79h]
  int v66; // [rsp+2Ch] [rbp-75h]
  __int64 v67; // [rsp+30h] [rbp-71h]
  PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor; // [rsp+38h] [rbp-69h]
  int v69; // [rsp+40h] [rbp-61h]
  __int16 v70; // [rsp+44h] [rbp-5Dh]
  char v71; // [rsp+48h] [rbp-59h]
  UCHAR Type; // [rsp+4Ch] [rbp-55h]
  unsigned int v73; // [rsp+50h] [rbp-51h]
  int v74; // [rsp+54h] [rbp-4Dh]
  int v75; // [rsp+58h] [rbp-49h]
  ULONGLONG Start; // [rsp+60h] [rbp-41h] BYREF
  int v77; // [rsp+68h] [rbp-39h]
  int v78; // [rsp+6Ch] [rbp-35h]
  int v79; // [rsp+70h] [rbp-31h]
  unsigned __int64 v80; // [rsp+78h] [rbp-29h]
  ULONGLONG MinimumAddress; // [rsp+80h] [rbp-21h] BYREF
  ULONGLONG MaximumAddress; // [rsp+88h] [rbp-19h] BYREF
  ULONGLONG Alignment; // [rsp+90h] [rbp-11h] BYREF
  _DWORD *v84; // [rsp+98h] [rbp-9h]
  ULONGLONG v85; // [rsp+A0h] [rbp-1h]
  _DWORD *v86; // [rsp+A8h] [rbp+7h]
  __int64 v87; // [rsp+B0h] [rbp+Fh]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v88; // [rsp+108h] [rbp+67h]

  v4 = 0;
  v84 = 0LL;
  v6 = a2;
  v65 = 0;
  *a3 = 0LL;
  v8 = 0;
  *a4 = 0;
  if ( Src && Src[7] )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, *Src, 0x36706E50u);
    v86 = Pool2;
    v10 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    memmove(Pool2, Src, *Src);
    if ( !v6 || !*v6 )
      goto LABEL_149;
    v12 = v6 + 1;
    v13 = *v6;
    v14 = (unsigned __int8 *)(v6 + 1);
    do
    {
      v15 = *((_DWORD *)v14 + 3);
      v14 += 16;
      v8 += v15;
      if ( v15 )
      {
        for ( i = v15; i; --i )
        {
          v17 = 0;
          if ( *v14 == 5 )
          {
            v17 = *((_DWORD *)v14 + 1);
          }
          else if ( (unsigned int)*v14 - 128 >= 2 && (unsigned __int8)(*v14 - 1) <= 6u )
          {
            goto LABEL_16;
          }
          --v8;
LABEL_16:
          v14 += v17 + 20;
        }
      }
      --v13;
    }
    while ( v13 );
    if ( v8 )
    {
      v18 = v10 + 8;
      v19 = v10[7] - 1;
      v75 = 0;
      v20 = 0;
      v21 = v10 + 8;
      if ( v19 >= 0 )
      {
        do
        {
          v22 = v21 + 2;
          v21 += 8 * (unsigned int)v21[1] + 2;
          while ( v22 < v21 )
          {
            v23 = *((_BYTE *)v22 + 1) == 0;
            v24 = v20 + 1;
            *((_BYTE *)v22 + 3) = 0;
            if ( !v23 )
              v24 = v20;
            v22 += 8;
            v20 = v24;
          }
          --v19;
        }
        while ( v19 >= 0 );
        v75 = v20;
      }
      v79 = v10[7];
      v25 = v79 - 1;
      v74 = v79 - 1;
      if ( v79 - 1 >= 0 )
      {
        while ( 1 )
        {
          v70 = *(_WORD *)v18;
          if ( *(_WORD *)v18 == 0xFFFF )
            v70 = 1;
          v26 = (unsigned int)v18[1];
          v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v18 + 2);
          *(_WORD *)v18 = 0;
          v28 = (unsigned __int64)&v18[8 * v26 + 2];
          v87 = v26;
          v80 = v28;
          if ( v18 + 2 == (_DWORD *)v28 )
          {
            *(_WORD *)v18 = -1;
            --v10[7];
            goto LABEL_128;
          }
          v29 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v12;
          v30 = 1;
          v31 = 0;
          v88 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v12;
          v66 = 1;
          v73 = 0;
          if ( !*v6 )
            goto LABEL_104;
          v78 = v8;
          do
          {
            v32 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v29->u.Memory48 + 1);
            v33 = 0;
            Descriptor = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)(&v29->u.Memory48 + 1);
            if ( !v29->u.Generic.Length )
              goto LABEL_102;
            do
            {
              if ( v32->Type == 5 )
              {
                LowPart = v32->u.Generic.Start.LowPart;
                goto LABEL_100;
              }
              if ( v32->Type == 129 || (unsigned __int8)(v32->Type - 1) > 6u )
                goto LABEL_99;
              v69 = 0;
              while ( 2 )
              {
                for ( j = v27; ; ++j )
                {
                  if ( (unsigned __int64)j >= v28 )
                  {
                    v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v18 + 2);
                    goto LABEL_97;
                  }
                  Type = v32->Type;
                  if ( j->Type == v32->Type && !j->Spare1 )
                    break;
LABEL_76:
                  ;
                }
                ShareDisposition = v32->ShareDisposition;
                Vector = 0LL;
                v37 = j->ShareDisposition;
                v38 = v32->ShareDisposition - 1;
                Start = 0LL;
                MinimumAddress = 0LL;
                MaximumAddress = 0LL;
                v39 = ShareDisposition;
                v67 = 1LL;
                if ( v38 > 2u )
                  v39 = v37;
                Alignment = 1LL;
                v77 = v39;
                Length = 0LL;
                if ( (unsigned __int8)(v37 - 1) > 2u )
                  LOBYTE(v37) = v39;
                v41 = 0LL;
                v71 = v37;
                v42 = 1LL;
                switch ( Type )
                {
                  case 1u:
                    goto LABEL_59;
                  case 2u:
                    Vector = Descriptor->u.Interrupt.Vector;
                    v43 = Vector;
                    goto LABEL_57;
                  case 3u:
                    goto LABEL_59;
                  case 4u:
                    v43 = Descriptor->u.Generic.Start.LowPart;
                    Vector = v43;
LABEL_57:
                    Length = j->u.Port.Length;
                    v41 = j->u.Port.Alignment;
                    goto LABEL_58;
                }
                if ( Type != 6 )
                {
                  if ( Type != 7 )
                  {
                    v43 = 0LL;
LABEL_58:
                    v44 = 1LL;
                    goto LABEL_61;
                  }
LABEL_59:
                  v45 = RtlCmDecodeMemIoResource(Descriptor, &Start);
                  Vector = Start;
                  v85 = v45;
                  Start = v45 + Start - 1;
                  v44 = RtlIoDecodeMemIoResource(j, &Alignment, &MinimumAddress, &MaximumAddress);
                  Length = MinimumAddress;
                  v41 = MaximumAddress;
                  v43 = Start;
                  v42 = v85;
                  LOBYTE(v39) = v77;
                  goto LABEL_60;
                }
                Length = j->u.Port.Alignment;
                v41 = j->u.Port.MinimumAddress.LowPart;
                v44 = j->u.Port.Length;
                Vector = Descriptor->u.Generic.Start.LowPart;
                v42 = Descriptor->u.Interrupt.Vector;
                v43 = (unsigned int)(v42 + Vector - 1);
LABEL_60:
                v67 = v44;
LABEL_61:
                if ( !v69 )
                {
                  if ( (_BYTE)v39 == v71 && Length == Vector && v41 >= v43 && v44 >= v42 )
                  {
                    v30 = v66;
                    if ( v41 != v43 )
                      v30 = 0;
                    ++*(_WORD *)v18;
                    v23 = (j->Option & 8) == 0;
                    v66 = v30;
                    j->Spare1 = 0x80;
                    if ( !v23 )
                    {
                      for ( k = j - 1; k >= (struct _IO_RESOURCE_DESCRIPTOR *)(v18 + 2); --k )
                      {
                        k->Type = 0;
                        --v18[1];
                        if ( k->Option != 8 )
                          break;
                      }
                    }
                    v32 = Descriptor;
                    v50 = j->Type;
                    j->Option = 1;
                    j->Flags = Descriptor->Flags;
                    if ( ((v50 - 1) & 0xF9) != 0 || v50 == 5 )
                    {
                      if ( v50 == 6 )
                      {
                        j->u.Port.Alignment = Vector;
                        j->u.Port.MinimumAddress.LowPart = Vector + v67 - 1;
                      }
                    }
                    else
                    {
                      j->u.Port.MinimumAddress.QuadPart = Vector;
                      j->u.Port.Alignment = 1;
                      j->u.Port.MaximumAddress.QuadPart = Vector + v67 - 1;
                    }
                    v28 = v80;
                    for ( m = j + 1; (unsigned __int64)m < v28 && (m->Option & 8) != 0; ++m )
                    {
                      m->Type = 0;
                      --v18[1];
                    }
                    goto LABEL_99;
                  }
LABEL_75:
                  v32 = Descriptor;
                  v28 = v80;
                  goto LABEL_76;
                }
                v66 = 0;
                if ( (_BYTE)v39 != v71 || Length > Vector || v41 < v43 || v44 < v42 || ((Alignment - 1) & Vector) != 0 )
                  goto LABEL_75;
                switch ( Type )
                {
                  case 1u:
                    goto LABEL_83;
                  case 2u:
                    goto LABEL_87;
                  case 3u:
                    goto LABEL_83;
                  case 4u:
LABEL_87:
                    j->u.Port.Length = Vector;
                    j->u.Port.Alignment = v43;
                    break;
                  case 6u:
                    j->u.Port.Alignment = Vector;
                    j->u.Port.MinimumAddress.LowPart = Vector + v67 - 1;
                    break;
                  case 7u:
LABEL_83:
                    j->u.Port.MinimumAddress.QuadPart = Vector;
                    j->u.Port.MaximumAddress.QuadPart = Vector + v67 - 1;
                    break;
                }
                ++*(_WORD *)v18;
                v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v18 + 2);
                v23 = (j->Option & 8) == 0;
                v32 = Descriptor;
                j->Spare1 = 0x80;
                j->Flags = Descriptor->Flags;
                if ( !v23 )
                {
                  for ( n = j - 1; n >= v27; --n )
                  {
                    n->Type = 0;
                    --v18[1];
                    if ( n->Option != 8 )
                      break;
                  }
                }
                v28 = v80;
                j->Option = 1;
                while ( (unsigned __int64)++j < v28 && (j->Option & 8) != 0 )
                {
                  j->Type = 0;
                  --v18[1];
                }
LABEL_97:
                if ( (unsigned int)++v69 < 2 )
                  continue;
                break;
              }
              v30 = v66;
LABEL_99:
              LowPart = 0LL;
LABEL_100:
              v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v18 + 2);
              v32 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v32 + LowPart + 20);
              ++v33;
              Descriptor = v32;
            }
            while ( v33 < v88->u.Generic.Length );
            v6 = a2;
            v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v18 + 2);
            v31 = v73;
LABEL_102:
            ++v31;
            v29 = v32;
            v88 = v32;
            v73 = v31;
          }
          while ( v31 < *v6 );
          v8 = v78;
          v12 = v6 + 1;
          v10 = v86;
          v25 = v74;
          LODWORD(v26) = v87;
LABEL_104:
          if ( *(_WORD *)v18 != (_WORD)v8 )
            goto LABEL_124;
          v49 = v18[1];
          if ( v49 != v8 && (v49 != v8 + 1 || *((_BYTE *)v18 + 9) != 0x80) )
          {
            v65 += v49;
            *(_WORD *)v18 = v70;
            goto LABEL_127;
          }
          if ( !v84 )
          {
            v65 += v49;
            v84 = v18;
            *(_WORD *)v18 = v70;
            if ( v30 )
              *a4 = 1;
          }
          else
          {
LABEL_124:
            *(_WORD *)v18 = -1;
            --v10[7];
          }
LABEL_127:
          v18[1] = v26;
          v18 = (_DWORD *)v28;
LABEL_128:
          v74 = --v25;
          if ( v25 < 0 )
          {
            v20 = v75;
            break;
          }
        }
      }
      v52 = v10[7];
      if ( !v52 )
      {
        *a3 = PnpCmResourcesToIoResources(0xFFFFLL, v6, 1);
LABEL_134:
        ExFreePoolWithTag(v10, 0);
        return v4;
      }
      v53 = 32 * (v65 - v20) + 8 * (v52 - 1 + 4 * (v52 - 1) + 9);
      v54 = (unsigned int *)ExAllocatePool2(0x100uLL, v53, 0x36706E50u);
      v55 = v54;
      if ( !v54 )
      {
        v4 = -1073741670;
        goto LABEL_134;
      }
      *v54 = v53;
      v54[1] = v6[1];
      v54[2] = v6[2];
      v54[3] = v10[3];
      v56 = v10[7];
      if ( v56 > 1 )
        *a4 = 0;
      v57 = v10 + 8;
      v58 = v79 - 1 < 0;
      v59 = v79 - 1;
      v55[7] = v56;
      v60 = v55 + 8;
      if ( !v58 )
      {
        do
        {
          v61 = (unsigned __int64)(v57 + 2);
          v62 = (unsigned __int64)&v57[8 * v57[1] + 2];
          if ( *(_WORD *)v57 != 0xFFFF )
          {
            *(_WORD *)v60 = *(_WORD *)v57;
            v63 = v60 + 2;
            *((_WORD *)v60 + 1) = *((_WORD *)v57 + 1);
            v23 = *((_BYTE *)v57 + 9) == 0x80;
            v64 = v60 + 2;
            if ( v23 )
            {
              *v55 -= 32;
            }
            else
            {
              *(_WORD *)v63 = -32767;
              *(_DWORD *)((char *)v60 + 10) = 3;
              *((_WORD *)v60 + 7) = 0;
              v60[4] = 1;
              v63 = v60 + 10;
            }
            while ( v61 < v62 )
            {
              if ( *(_BYTE *)(v61 + 1) )
              {
                *(_OWORD *)v63 = *(_OWORD *)v61;
                *((_OWORD *)v63 + 1) = *(_OWORD *)(v61 + 16);
                v63 += 8;
              }
              v61 += 32LL;
            }
            v60[1] = ((char *)v63 - (char *)v60 - 8) >> 5;
            v60 = v63;
            v64[2] = 1;
          }
          --v59;
          v57 = (_DWORD *)v62;
        }
        while ( v59 >= 0 );
      }
      *a3 = (__int64)v55;
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
LABEL_149:
      *a3 = (__int64)v10;
    }
  }
  else if ( a2 && *a2 )
  {
    *a3 = PnpCmResourcesToIoResources((__int64)Src, a2, 1);
  }
  return 0LL;
}
