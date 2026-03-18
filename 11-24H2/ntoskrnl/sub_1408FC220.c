/*
 * XREFs of sub_1408FC220 @ 0x1408FC220
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x140434960 (PsGetProcessId.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     sub_1408A95DC @ 0x1408A95DC (sub_1408A95DC.c)
 *     sub_1408FB3EC @ 0x1408FB3EC (sub_1408FB3EC.c)
 *     sub_1408FB650 @ 0x1408FB650 (sub_1408FB650.c)
 *     sub_1408FC89C @ 0x1408FC89C (sub_1408FC89C.c)
 *     sub_1408FD018 @ 0x1408FD018 (sub_1408FD018.c)
 *     sub_1409DFC78 @ 0x1409DFC78 (sub_1409DFC78.c)
 *     sub_1409DFD58 @ 0x1409DFD58 (sub_1409DFD58.c)
 *     sub_140A50BF0 @ 0x140A50BF0 (sub_140A50BF0.c)
 *     sub_140A6375C @ 0x140A6375C (sub_140A6375C.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408FC220(void *Src, size_t Size)
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
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
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
      v5 = sub_1408FC89C(ProcessId, v4, &v14);
      v12 = v5;
      if ( v5 < 0 )
        goto LABEL_17;
      if ( v13 == 3 )
      {
        v10 = sub_1408FB650(v14, (__int64)P, (__int64)Src, v2);
      }
      else
      {
        if ( v13 != 4 )
        {
          switch ( v13 )
          {
            case 1:
              v10 = sub_1409DFC78(v14, P, (unsigned int)v2);
              goto LABEL_16;
            case 2:
              v10 = sub_1409DFD58(v14, P, (unsigned int)v2);
              goto LABEL_16;
            case 5:
            case 6:
              v5 = -1073741811;
              if ( Src )
                v5 = -1073741822;
              v12 = v5;
              break;
            case 7:
              v10 = sub_1408A95DC(*(_QWORD *)v14);
              goto LABEL_16;
            case 8:
              v10 = sub_140A6375C(v14, P, (unsigned int)v2);
              goto LABEL_16;
            case 9:
              v10 = sub_140A50BF0(v14, P, (unsigned int)v2);
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
        v10 = sub_1408FB3EC(v14, v9);
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
      sub_1408FD018(v14);
    v5 = v12;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
