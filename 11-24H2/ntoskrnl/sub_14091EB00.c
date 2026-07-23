/*
 * XREFs of sub_14091EB00 @ 0x14091EB00
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     sub_1408FF83C @ 0x1408FF83C (sub_1408FF83C.c)
 *     sub_14091DCCC @ 0x14091DCCC (sub_14091DCCC.c)
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 *     sub_14091F17C @ 0x14091F17C (sub_14091F17C.c)
 *     sub_14091F8F8 @ 0x14091F8F8 (sub_14091F8F8.c)
 *     sub_1409D9A28 @ 0x1409D9A28 (sub_1409D9A28.c)
 *     sub_1409D9B08 @ 0x1409D9B08 (sub_1409D9B08.c)
 *     sub_140A47FA0 @ 0x140A47FA0 (sub_140A47FA0.c)
 *     sub_140A5C05C @ 0x140A5C05C (sub_140A5C05C.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091EB00(void *Src, size_t Size)
{
  size_t v2; // r15
  unsigned int v4; // ebx
  int v5; // edi
  void *Pool2; // rax
  int *v7; // rsi
  HANDLE ProcessId; // rax
  __int64 v9; // rdx
  int v10; // eax
  int v12; // [rsp+24h] [rbp-44h]
  int v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h]

  v2 = (unsigned int)Size;
  v4 = 0;
  v14 = 0LL;
  P = 0LL;
  if ( !Src )
  {
    v13 = 4;
    goto LABEL_12;
  }
  if ( (unsigned int)Size < 8 )
  {
    v5 = -1073741811;
    v12 = -1073741811;
    goto LABEL_17;
  }
  v5 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)Size, 0x42524157u);
  if ( Pool2 )
    P = Pool2;
  else
    v5 = -1073741801;
  v12 = v5;
  if ( v5 >= 0 )
  {
    v7 = (int *)P;
    memmove(P, Src, v2);
    v13 = *v7;
    if ( *v7 == 7 )
    {
LABEL_13:
      ProcessId = PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v5 = sub_14091F17C(ProcessId, v4, &v14);
      v12 = v5;
      if ( v5 < 0 )
        goto LABEL_17;
      if ( v13 == 3 )
      {
        v10 = sub_14091DF30(v14, (__int64)P, (__int64)Src, v2);
      }
      else
      {
        if ( v13 != 4 )
        {
          switch ( v13 )
          {
            case 1:
              v10 = sub_1409D9A28(v14, P, (unsigned int)v2);
              goto LABEL_16;
            case 2:
              v10 = sub_1409D9B08(v14, P, (unsigned int)v2);
              goto LABEL_16;
            case 5:
            case 6:
              v5 = -1073741811;
              if ( Src )
                v5 = -1073741822;
              v12 = v5;
              break;
            case 7:
              v10 = sub_1408FF83C(*(_QWORD *)v14);
              goto LABEL_16;
            case 8:
              v10 = sub_140A5C05C(v14, P, (unsigned int)v2);
              goto LABEL_16;
            case 9:
              v10 = sub_140A47FA0(v14, P, (unsigned int)v2);
              goto LABEL_16;
            default:
              goto LABEL_27;
          }
          goto LABEL_17;
        }
        if ( P )
        {
LABEL_27:
          v5 = -1073741811;
          v12 = -1073741811;
          goto LABEL_17;
        }
        v10 = sub_14091DCCC(v14, v9);
      }
LABEL_16:
      v5 = v10;
      v12 = v10;
      goto LABEL_17;
    }
LABEL_12:
    v4 = 1;
    goto LABEL_13;
  }
LABEL_17:
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 232), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      sub_14091F8F8(v14);
    v5 = v12;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
