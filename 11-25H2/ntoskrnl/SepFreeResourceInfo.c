/*
 * XREFs of SepFreeResourceInfo @ 0x140362310
 * Callers:
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x140291470 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeResourceInfo(char *P)
{
  _DWORD **v2; // r15
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  void **v9; // rax
  _DWORD *v10; // r14
  _QWORD **v11; // r8
  void **v12; // rdx
  int v13; // eax
  __int64 *v14; // r11
  PVOID v15; // r11

  if ( P )
  {
    v2 = (_DWORD **)(P + 8);
    while ( 1 )
    {
      v3 = *v2;
      if ( *v2 == (_DWORD *)v2 )
        break;
      if ( (v3[14] & 1) != 0 )
      {
        v4 = *(_QWORD *)v3;
        if ( *(_DWORD **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (_QWORD *)*((_QWORD *)v3 + 1), (_DWORD *)*v5 != v3) )
LABEL_14:
          __fastfail(3u);
        *v5 = v4;
        *(_QWORD *)(v4 + 8) = v5;
        v3[14] &= ~1u;
        --*(_DWORD *)P;
      }
      v6 = (void **)(v3 + 18);
      while ( 1 )
      {
        v7 = *v6;
        if ( *v6 == v6 )
          break;
        if ( (v7[4] & 2) != 0 )
        {
          v11 = (_QWORD **)v7[2];
          if ( v11[1] != v7 + 2 )
            goto LABEL_14;
          v12 = (void **)v7[3];
          if ( *v12 != v7 + 2 )
            goto LABEL_14;
          *v12 = v11;
          v11[1] = v12;
          *((_DWORD *)v7 + 8) &= ~2u;
          --v3[22];
        }
        if ( (v7[4] & 1) != 0 )
        {
          v8 = (_QWORD *)*v7;
          if ( *(_QWORD **)(*v7 + 8LL) != v7 )
            goto LABEL_14;
          v9 = (void **)v7[1];
          if ( *v9 != v7 )
            goto LABEL_14;
          *v9 = v8;
          v8[1] = v9;
          *((_DWORD *)v7 + 8) &= ~1u;
          --v3[15];
          if ( (v7[4] & 4) != 0 )
            --v3[16];
        }
        ExFreePoolWithTag(v7, 0);
      }
      v10 = (_DWORD *)*((_QWORD *)v3 + 12);
      while ( v10 != v3 + 24 )
      {
        v13 = v10[4];
        v14 = (__int64 *)(v10 - 4);
        v10 = *(_DWORD **)v10;
        if ( (v13 & 1) == 0 )
        {
          AuthzBasepRemoveSecurityAttributeValueFromLists(v3, v14, 0);
          ExFreePoolWithTag(v15, 0);
        }
      }
      ExFreePoolWithTag(v3, 0);
    }
    ExFreePoolWithTag(P, 0);
  }
}
