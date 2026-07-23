/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x1800C62C4
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C64A0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpAddKnownAce @ 0x180018F50 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1800C5940 (RtlCreateAcl.c)
 *     RtlpSysVolAllocate @ 0x1800C6430 (RtlpSysVolAllocate.c)
 *     RtlSetControlSecurityDescriptor @ 0x1800C6450 (RtlSetControlSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpSysVolCreateSecurityDescriptor(__int16 **a1, ACL **a2)
{
  __int64 v4; // rax
  __int16 *v5; // rdi
  ACL *v6; // rax
  ACL *v7; // rsi
  int Acl; // ebx
  __int64 result; // rax
  ACL *v10; // rcx
  __int16 v11; // ax
  __int16 Sid; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+32h] [rbp-46h]
  __int16 v14; // [rsp+36h] [rbp-42h]
  int v15; // [rsp+38h] [rbp-40h]

  v4 = RtlpSysVolAllocate(40LL);
  v5 = (__int16 *)v4;
  if ( v4 )
  {
    Sid = 257;
    v15 = 18;
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    v13 = 0;
    v14 = 1280;
    *(_BYTE *)v4 = 1;
    v6 = (ACL *)RtlpSysVolAllocate(28LL);
    v7 = v6;
    if ( !v6 )
    {
      Acl = -1073741670;
LABEL_4:
      RtlpSysVolFree(v5);
      return (unsigned int)Acl;
    }
    Acl = RtlCreateAcl(v6, 0x1Cu, 2u);
    v10 = v7;
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce(v7, 2u, 3, 0x1FFFFF, (unsigned __int8 *)&Sid, 0);
      if ( Acl >= 0 )
      {
        if ( *(_BYTE *)v5 == 1 )
        {
          v11 = v5[1];
          if ( v11 < 0 )
          {
            Acl = -1073741703;
          }
          else
          {
            *((_QWORD *)v5 + 4) = v7;
            v5[1] = v11 & 0xFFF3 | 4;
            Acl = RtlSetControlSecurityDescriptor(v5, 0x1000u, 0x1000u);
            if ( Acl >= 0 )
            {
              *a1 = v5;
              result = 0LL;
              *a2 = v7;
              return result;
            }
          }
        }
        else
        {
          Acl = -1073741736;
        }
      }
      v10 = v7;
    }
    RtlpSysVolFree(v10);
    goto LABEL_4;
  }
  return 3221225626LL;
}
