/*
 * XREFs of SepAdtObjectReferenceAuditAlarm @ 0x14079159C
 * Callers:
 *     ObpCheckObjectReference @ 0x14086C31C (ObpCheckObjectReference.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepQueryTypeString @ 0x140913780 (SepQueryTypeString.c)
 *     SepQueryNameString @ 0x140914194 (SepQueryNameString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtObjectReferenceAuditAlarm(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned __int16 *v4; // rdi
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  int NameString; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r8d
  unsigned __int16 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 *v21; // [rsp+30h] [rbp-D8h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD Src[2]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-B8h]
  int v25; // [rsp+58h] [rbp-B0h]
  _QWORD v26[129]; // [rsp+60h] [rbp-A8h]

  P[0] = 0LL;
  v4 = 0LL;
  v5 = *a2;
  v7 = a2[2];
  v21 = 0LL;
  if ( v5 )
    v10 = *(__int64 **)(v5 + 152);
  else
    v10 = *(__int64 **)(v7 + 152);
  v11 = *v10;
  v12 = *(_QWORD *)(v7 + 24);
  memset_0(Src, 0, 0x418uLL);
  v24 = 0;
  v25 = 524409;
  Src[0] = 3;
  Src[1] = 4691;
  if ( !a4 )
    HIWORD(v25) = 16;
  NameString = SepQueryNameString(a1, P);
  if ( NameString >= 0 )
  {
    NameString = SepQueryTypeString(a1, &v21);
    if ( NameString < 0 )
    {
      v4 = v21;
    }
    else
    {
      LODWORD(v26[4 * v24]) = 4;
      HIDWORD(v26[4 * v24]) = 4 * *(unsigned __int8 *)(v11 + 1) + 8;
      v26[4 * v24++ + 3] = v11;
      LODWORD(v26[4 * v24]) = 1;
      HIDWORD(v26[4 * v24]) = 32;
      v26[4 * v24 + 3] = &SeSubsystemName;
      v14 = 4LL * ++v24;
      if ( v5 )
      {
        v15 = *(_QWORD *)(v5 + 24);
        LODWORD(v26[v14]) = 5;
        HIDWORD(v26[4 * v24]) = 8;
        v26[4 * v24 + 1] = v15;
      }
      else
      {
        LODWORD(v26[v14]) = 5;
        HIDWORD(v26[4 * v24]) = 8;
        v26[4 * v24 + 1] = v12;
      }
      v4 = v21;
      v16 = ++v24;
      if ( v21 )
      {
        LODWORD(v26[4 * v16]) = 1;
        HIDWORD(v26[4 * v24]) = *v4 + 16;
        v26[4 * v24 + 3] = v4;
        v16 = v24;
      }
      v17 = (unsigned __int16 *)P[0];
      v18 = v16 + 1;
      v24 = v16 + 1;
      if ( P[0] )
      {
        LODWORD(v26[4 * v18]) = 1;
        HIDWORD(v26[4 * v24]) = *v17 + 16;
        v26[4 * v24 + 3] = v17;
        LODWORD(v18) = v24;
      }
      v19 = (unsigned int)(v18 + 1);
      v24 = v19;
      LODWORD(v26[4 * v19]) = 7;
      HIDWORD(v26[4 * v24]) = 4;
      v26[4 * v24 + 1] = a3;
      v26[4 * v24++ + 2] = v16;
      LODWORD(v26[4 * v24]) = 10;
      HIDWORD(v26[4 * v24]) = 4;
      v26[4 * v24++ + 1] = a3;
      LODWORD(v26[4 * v24]) = 11;
      HIDWORD(v26[4 * v24]) = 8;
      v26[4 * v24++ + 1] = a2[3];
      SepAdtLogAuditRecord(Src);
    }
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( NameString < 0 )
    SepAuditFailed((unsigned int)NameString);
}
