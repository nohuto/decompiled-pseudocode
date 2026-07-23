/*
 * XREFs of IopCreateSecurityDescriptorPerType @ 0x1408AC480
 * Callers:
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1408ABD7C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 * Callees:
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x1409112B0 (RtlAddMandatoryAce.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopCreateSecurityDescriptorPerType(char *a1, int a2, ACL **a3, _DWORD *a4)
{
  char v7; // bp
  int v8; // edx
  int v9; // edx
  PACL v10; // rdi
  unsigned __int16 v11; // r14
  ACL *Pool2; // rax
  ACL *v13; // r15
  __int64 result; // rax
  char v15; // cl
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 v18; // ax
  int v19; // edx
  int v20; // edx

  v7 = 0;
  v8 = a2 - 1;
  if ( !v8 )
  {
    v10 = SePublicDefaultDacl;
    goto LABEL_4;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = SePublicDefaultUnrestrictedDacl;
    goto LABEL_4;
  }
  v19 = v9 - 1;
  if ( !v19 )
  {
    v10 = SePublicOpenDacl;
    goto LABEL_21;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v10 = SePublicOpenUnrestrictedDacl;
LABEL_21:
    v7 = 1;
    goto LABEL_4;
  }
  if ( v20 != 1 )
    return 3221225485LL;
  v10 = SeSystemDefaultDacl;
LABEL_4:
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *a1 = 1;
  if ( v7 != 1 )
    goto LABEL_11;
  v11 = 4 * (*((unsigned __int8 *)SeLowMandatorySid + 1) + 6);
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v11, 0x65536F49u);
  v13 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlCreateAcl(Pool2, v11, 2u);
  RtlAddMandatoryAce(v13, 2u, 0, SeLowMandatorySid, 0x11u, 1u);
  v15 = *a1;
  if ( *a1 == 1 )
  {
    v16 = *((_WORD *)a1 + 1);
    if ( v16 >= 0 )
    {
      *((_QWORD *)a1 + 3) = v13;
      *((_WORD *)a1 + 1) = v16 & 0xFFCF | 0x10;
    }
  }
  *a3 = v13;
  if ( v15 != 1 )
  {
    result = 3221225560LL;
  }
  else
  {
LABEL_11:
    v17 = *((_WORD *)a1 + 1);
    if ( v17 < 0 )
    {
      result = 3221225593LL;
    }
    else
    {
      v18 = v17 | 4;
      *((_QWORD *)a1 + 4) = 0LL;
      if ( v10 )
        *((_QWORD *)a1 + 4) = v10;
      *((_WORD *)a1 + 1) = v18 & 0xFFF7;
      result = 0LL;
    }
  }
  if ( a4 )
  {
    *a4 |= 4u;
    if ( v7 )
      *a4 |= 0x10u;
  }
  return result;
}
