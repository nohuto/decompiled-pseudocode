/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x1408212E0
 * Callers:
 *     _PnpCtxRegCopyTree @ 0x14081800C (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x1402372D0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlGetKeySecurity @ 0x140821814 (_RegRtlGetKeySecurity.c)
 *     _RegRtlSetKeySecurity @ 0x140821AFC (_RegRtlSetKeySecurity.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140928644 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x14097D9B4 (_RegRtlEnumKey.c)
 *     _RegRtlEnumValue @ 0x14097E62C (_RegRtlEnumValue.c)
 *     _RegRtlSetValue @ 0x14097EB88 (_RegRtlSetValue.c)
 *     _RegRtlQueryInfoKey @ 0x14097EFD8 (_RegRtlQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlCopyTreeInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6, char a7)
{
  __int64 Pool2; // r15
  BOOL v9; // edi
  void *v10; // rsi
  PVOID v11; // r12
  int v14; // ebx
  int v15; // eax
  int v16; // r13d
  ULONG v17; // eax
  unsigned __int64 v18; // rdi
  ULONG_PTR v19; // r14
  void *v20; // rax
  int v21; // eax
  ULONG v22; // r13d
  PVOID i; // rax
  int v24; // eax
  int v26; // [rsp+28h] [rbp-A9h]
  ULONG v27; // [rsp+50h] [rbp-81h] BYREF
  ULONG v28; // [rsp+54h] [rbp-7Dh] BYREF
  PVOID P; // [rsp+58h] [rbp-79h]
  unsigned int v30; // [rsp+60h] [rbp-71h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-69h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-61h] BYREF
  int v33; // [rsp+74h] [rbp-5Dh] BYREF
  __int64 v34; // [rsp+78h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp-49h] BYREF
  __int64 v37; // [rsp+90h] [rbp-41h]
  unsigned __int64 HighLimit; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 LowLimit; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-29h]
  __int64 KeyInformation; // [rsp+B0h] [rbp-21h] BYREF
  int v42; // [rsp+B8h] [rbp-19h]

  v37 = a6;
  KeyHandle = 0LL;
  Handle = 0LL;
  Pool2 = 0LL;
  ResultLength = 0;
  v9 = 0;
  v32 = 0;
  v10 = 0LL;
  v33 = 0;
  v11 = 0LL;
  v28 = 0;
  v27 = 0;
  v30 = 0;
  LODWORD(v34) = 0;
  P = 0LL;
  HighLimit = 0LL;
  LowLimit = 0LL;
  KeyInformation = 0LL;
  v42 = 0;
  v40 = a3;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v14 = -1073741670;
    goto LABEL_71;
  }
  v14 = RegRtlOpenKeyTransacted(a1, a2, 8LL, 131097LL, &KeyHandle, v37);
  if ( v14 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (KeyInformation & 0x200000000LL) != 0 )
      {
        v14 = -2147483603;
        goto LABEL_71;
      }
      v9 = (KeyInformation & 0x100000000LL) != 0;
    }
    if ( a5 )
    {
      while ( (unsigned int)RegRtlGetKeySecurity(KeyHandle, 4LL, Pool2, &v32) == -1073741789 )
      {
        if ( Pool2 )
          ExFreePoolWithTag((PVOID)Pool2, 0);
        Pool2 = ExAllocatePool2(0x100uLL, v32, 0x4C474552u);
        if ( !Pool2 )
          goto LABEL_28;
      }
    }
    LOBYTE(v26) = 0;
    v15 = RegRtlCreateKeyTransacted(v40, a4, v9, 393247LL, Pool2 & -(__int64)(a5 != 0), v26, &Handle, &v33, v37);
    v16 = 0;
    v14 = v15;
    if ( v15 >= 0 )
    {
      if ( a5 && Pool2 && v33 == 2 )
        RegRtlSetKeySecurity(Handle, 4LL, Pool2);
      if ( (unsigned int)RegRtlQueryInfoKey((_DWORD)KeyHandle, 0, (unsigned int)&v28, 0, (__int64)&v27, (__int64)&v30) )
      {
        LODWORD(v18) = 0;
        LODWORD(v19) = 0;
        goto LABEL_35;
      }
      v17 = v28;
      if ( v28 <= v27 )
        v17 = v27;
      if ( v17 )
      {
        if ( v17 + 1 < v17 )
          goto LABEL_32;
        ++v17;
      }
      v18 = 2LL * v17;
      if ( v18 <= 0xFFFFFFFF )
      {
        v19 = v30;
        v14 = 0;
        if ( !(_DWORD)v18 || (v10 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v18, 0x4C474552u)) != 0LL )
        {
          if ( !(_DWORD)v19 )
            goto LABEL_35;
          v20 = (void *)ExAllocatePool2(0x100uLL, v19, 0x4C474552u);
          P = v20;
          if ( v20 )
          {
            v11 = v20;
LABEL_35:
            while ( 1 )
            {
              v30 = (unsigned int)v18 >> 1;
              v21 = RegRtlEnumKey(KeyHandle);
              if ( v21 == -2147483622 )
                break;
              if ( v21 == -1073741789 )
              {
                v18 = 2LL * v30;
                if ( v18 > 0xFFFFFFFF )
                {
                  v14 = -1073741675;
                  goto LABEL_67;
                }
                v14 = 0;
                if ( v10 )
                  ExFreePoolWithTag(v10, 0);
                v10 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v18, 0x4C474552u);
                if ( !v10 )
                {
                  v14 = -1073741801;
                  goto LABEL_67;
                }
              }
              else
              {
                if ( v21
                  || (*((_WORD *)v10 + ((unsigned __int64)(unsigned int)v18 >> 1) - 1) = 0,
                      (v21 = RegRtlCopyTreeInternal(
                               (_DWORD)KeyHandle,
                               (_DWORD)v10,
                               (_DWORD)Handle,
                               (_DWORD)v10,
                               a5,
                               v37,
                               a7)) != 0)
                  && v21 != -2147483603 )
                {
                  v14 = v21;
                  break;
                }
                ++v16;
              }
            }
            v22 = 0;
            if ( v14 >= 0 )
            {
              for ( i = P; ; i = v11 )
              {
                while ( 1 )
                {
                  v27 = v19;
                  v28 = (unsigned int)v18 >> 1;
                  v24 = RegRtlEnumValue(KeyHandle, v22, v10, (__int64)&v34, i, (__int64)&v27);
                  if ( v24 == -2147483622 )
                    goto LABEL_66;
                  if ( v24 != -1073741789 )
                    break;
                  if ( v28 > (unsigned int)v18 >> 1 )
                  {
                    v18 = 2LL * v28;
                    if ( v18 > 0xFFFFFFFF )
                    {
                      v14 = -1073741675;
                      goto LABEL_66;
                    }
                    v14 = 0;
                    if ( v10 )
                      ExFreePoolWithTag(v10, 0);
                    v10 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v18, 0x4C474552u);
                    if ( !v10 )
                    {
                      v14 = -1073741801;
LABEL_66:
                      v11 = P;
                      goto LABEL_67;
                    }
                  }
                  i = P;
                  if ( v27 > (unsigned int)v19 )
                  {
                    v19 = v27;
                    if ( P )
                      ExFreePoolWithTag(P, 0);
                    i = (PVOID)ExAllocatePool2(0x100uLL, v19, 0x4C474552u);
                    P = i;
                    if ( !i )
                      goto LABEL_31;
                  }
                }
                v11 = P;
                if ( v24 )
                  break;
                *((_WORD *)v10 + ((unsigned __int64)(unsigned int)v18 >> 1) - 1) = 0;
                v24 = RegRtlSetValue(Handle, v27);
                if ( v24 )
                  break;
                ++v22;
              }
              v14 = v24;
            }
LABEL_67:
            if ( v11 )
              ExFreePoolWithTag(v11, 0);
          }
          else
          {
LABEL_31:
            v14 = -1073741801;
          }
          if ( v10 )
            ExFreePoolWithTag(v10, 0);
        }
        else
        {
LABEL_28:
          v14 = -1073741801;
        }
        goto LABEL_71;
      }
LABEL_32:
      v14 = -1073741675;
    }
  }
LABEL_71:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v14;
}
