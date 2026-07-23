/*
 * XREFs of EmpParseTargetRuleStringIndexList @ 0x140C0674C
 * Callers:
 *     EmpParseTargetRules @ 0x140C06A68 (EmpParseTargetRules.c)
 * Callees:
 *     strchr @ 0x1404FD0A0 (strchr.c)
 *     RtlCharToInteger @ 0x140A50930 (RtlCharToInteger.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140C052A4 (EmpInfParseGetValueFromSectionAndKeyName.c)
 */

bool __fastcall EmpParseTargetRuleStringIndexList(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int *a7)
{
  int v7; // esi
  unsigned int v8; // r14d
  char v9; // bl
  unsigned int v10; // r13d
  int v12; // edx
  bool v14; // zf
  char v15; // cl
  __int64 v16; // r12
  _BYTE *v17; // r14
  unsigned __int64 v18; // rsi
  CHAR *Pool2; // rax
  __int64 v20; // r9
  CHAR *v21; // r15
  CHAR *v22; // rcx
  __int64 v23; // r14
  CHAR v24; // al
  CHAR *v25; // rax
  __int64 ValueFromSectionAndKeyName; // r10
  __int64 i; // r8
  unsigned __int8 *v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rcx
  unsigned int v33; // [rsp+30h] [rbp-58h]
  int v34; // [rsp+34h] [rbp-54h]
  ULONG Value[20]; // [rsp+38h] [rbp-50h] BYREF
  int v37; // [rsp+98h] [rbp+10h]
  unsigned int v38; // [rsp+A0h] [rbp+18h]
  unsigned int v39; // [rsp+A8h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  v7 = 0;
  Value[0] = 0;
  v8 = 0;
  v9 = 0;
  v37 = 0;
  v10 = 0;
  v33 = 0;
  v12 = *a7;
  v34 = *a7;
  if ( !a5 )
    return 0;
  while ( 1 )
  {
    v14 = v9 == 0;
    if ( v9 )
      return v14;
    switch ( v7 )
    {
      case 0:
        if ( *a2 != 123 )
          goto LABEL_56;
        goto LABEL_57;
      case 1:
        v15 = *a2;
        if ( *a2 == 125 )
          goto LABEL_14;
        if ( v10 > a3 || v8 > a4 || (v16 = v12 + v8 + v10, (unsigned int)v16 >= a6) )
        {
          v9 = 1;
          return v9 == 0;
        }
        v17 = a2;
        if ( v15 )
        {
          do
          {
            if ( strchr(".}", v15) )
              break;
            v15 = *++a2;
          }
          while ( *a2 );
          v12 = v34;
          a3 = v38;
          a4 = v39;
        }
        v18 = a2 - v17 + 1;
        if ( a2 - v17 == -1 )
        {
          v7 = v37;
          v9 = 1;
          v8 = v33;
        }
        else
        {
          Pool2 = (CHAR *)ExAllocatePool2(0x100uLL, a2 - v17 + 1, 0x74694D45uLL);
          v21 = Pool2;
          if ( !Pool2 || v18 > 0x7FFFFFFF )
            goto LABEL_25;
          if ( (unsigned __int64)(a2 - v17) > 0x7FFFFFFE )
          {
            *Pool2 = 0;
LABEL_25:
            v7 = v37;
            v9 = 1;
            v8 = v33;
            goto LABEL_26;
          }
          v22 = Pool2;
          v23 = v17 - Pool2;
          while ( v18 != 1 )
          {
            v24 = v22[v23];
            if ( !v24 )
              break;
            *v22 = v24;
            --v18;
            ++v22;
          }
          v25 = v22 - 1;
          if ( v18 )
            v25 = v22;
          *v25 = 0;
          if ( !v18 )
            goto LABEL_25;
          if ( v10 >= v38 )
          {
            v8 = v33;
            if ( RtlCharToInteger(v21, 0x10u, Value) >= 0 )
            {
              v8 = ++v33;
              *(_DWORD *)(a5 + 4 * v16) = Value[0];
LABEL_52:
              v7 = 2;
              v37 = 2;
            }
            else
            {
              v7 = v37;
              v9 = 1;
            }
          }
          else
          {
            ValueFromSectionAndKeyName = EmpInfParseGetValueFromSectionAndKeyName(a1, (__int64)"Strings", v21, v20, 0LL);
            if ( ValueFromSectionAndKeyName )
            {
              for ( i = 0LL; (unsigned int)i < EmpNumberOfStrings; i = (unsigned int)(i + 1) )
              {
                v28 = (unsigned __int8 *)*((_QWORD *)EmpStringTable + i);
                v29 = ValueFromSectionAndKeyName - (_QWORD)v28;
                do
                {
                  v30 = v28[v29];
                  v31 = *v28 - v30;
                  if ( v31 )
                    break;
                  ++v28;
                }
                while ( v30 );
                if ( !v31 )
                {
                  v32 = v10 + v34;
                  v8 = v33;
                  ++v10;
                  Value[0] = i;
                  *(_DWORD *)(a5 + 4 * v32) = i;
                  goto LABEL_52;
                }
              }
              Value[0] = i;
            }
            v7 = v37;
            v9 = 1;
            v8 = v33;
          }
          ExFreePoolWithTag(v21, 0x74694D45u);
LABEL_26:
          v12 = v34;
          a3 = v38;
          a4 = v39;
        }
        break;
      case 2:
        if ( *a2 != 46 )
        {
          if ( *a2 != 125 )
            goto LABEL_56;
LABEL_14:
          v7 = 3;
          goto LABEL_58;
        }
LABEL_57:
        v7 = 1;
LABEL_58:
        ++a2;
        v37 = v7;
        break;
      case 3:
        if ( !*a2 && v10 == a3 && v8 == a4 )
        {
          *a7 = v12 + v8 + v10;
          return v9 == 0;
        }
LABEL_56:
        v9 = 1;
        break;
    }
  }
}
