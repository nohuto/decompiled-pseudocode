/*
 * XREFs of SeMaximumAuditMask @ 0x140499CD8
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14088E1C0 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     SepSidInToken @ 0x1403CB430 (SepSidInToken.c)
 */

unsigned __int64 __fastcall SeMaximumAuditMask(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 result; // rax
  __int64 v8; // rbx
  __int64 i; // rbp
  unsigned __int8 v10; // cl
  int v11; // esi
  bool v12; // zf
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  *a4 = 0;
  if ( a1 )
  {
    result = *(unsigned __int16 *)(a1 + 4);
    if ( (_WORD)result )
    {
      v8 = a1 + 8;
      for ( i = *(unsigned __int16 *)(a1 + 4); i; --i )
      {
        v10 = *(_BYTE *)(v8 + 1);
        if ( (v10 & 8) == 0 )
        {
          if ( *(_BYTE *)v8 == 2 )
          {
            v11 = *(_DWORD *)(v8 + 4) & a2;
            if ( v11 )
            {
              v12 = (v10 & 0x40) == 0;
LABEL_12:
              if ( !v12 && SepSidInToken(a3, 0LL, (unsigned __int8 *)(v8 + 8), 1, 0, 0) )
                *a4 |= v11;
            }
          }
          else if ( *(_BYTE *)v8 == 13 )
          {
            v11 = *(_DWORD *)(v8 + 4) & a2;
            v12 = ((v10 >> 6) & (v11 != 0)) == 0;
            goto LABEL_12;
          }
        }
        result = *(unsigned __int16 *)(v8 + 2);
        v8 += result;
      }
    }
  }
  return result;
}
