/*
 * XREFs of PiControlGetRelatedDevice @ 0x140932E90
 * Callers:
 *     <none>
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDD90 (PiControlCopyUserModeCallersBuffer.c)
 *     PiGetRelatedDevice @ 0x1409349F8 (PiGetRelatedDevice.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetRelatedDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  void *Pool2; // rbx
  int v8; // eax
  const void *v9; // r15
  unsigned int v10; // edi
  int RelatedDevice; // edi
  unsigned int v12; // r8d
  char *v14; // rcx
  int v15; // eax
  PVOID v16; // rax
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+38h] BYREF

  v4 = *a2;
  *(_OWORD *)P = 0LL;
  WORD1(P[0]) = v4;
  LOWORD(P[0]) = v4;
  if ( (unsigned __int16)(v4 - 1) <= 0x18Fu && (v4 & 1) == 0 )
  {
    P[1] = 0LL;
    Pool2 = (void *)*((_QWORD *)a2 + 3);
    if ( Pool2 && (v8 = *((_DWORD *)a2 + 8)) != 0 )
    {
      v18 = 2 * v8;
      if ( 2 * v8 )
      {
        if ( a4 )
        {
          Pool2 = (void *)ExAllocatePool2(0x101uLL);
          if ( !Pool2 )
          {
            RelatedDevice = -1073741670;
            goto LABEL_25;
          }
          v4 = (unsigned __int16)P[0];
        }
LABEL_7:
        v9 = (const void *)*((_QWORD *)a2 + 1);
        v10 = v4;
        if ( a4 )
        {
          if ( v4 )
          {
            v16 = (PVOID)ExAllocatePool2(0x101uLL);
            P[1] = v16;
            if ( !v16 )
            {
              RelatedDevice = -1073741670;
              goto LABEL_26;
            }
            RelatedDevice = PiControlCopyUserModeCallersBuffer((char *)v16, v9, v10, 2, a4, 1);
            if ( RelatedDevice < 0 )
            {
              ExFreePoolWithTag(P[1], 0);
              v16 = 0LL;
              P[1] = 0LL;
LABEL_26:
              if ( v16 )
                ExFreePoolWithTag(v16, 0);
              if ( Pool2 )
                ExFreePoolWithTag(Pool2, 0);
              return (unsigned int)RelatedDevice;
            }
          }
        }
        else
        {
          P[1] = *((PVOID *)a2 + 1);
        }
        RelatedDevice = PiGetRelatedDevice(P, Pool2, &v18, *((unsigned int *)a2 + 4));
        if ( Pool2 )
        {
          v12 = 2 * *((_DWORD *)a2 + 8);
          if ( a4 )
          {
            if ( v12 )
            {
              v14 = (char *)*((_QWORD *)a2 + 3);
              if ( v14 )
              {
                v15 = PiControlCopyUserModeCallersBuffer(v14, Pool2, v12, 2, a4, 0);
                if ( v15 < 0 )
                  RelatedDevice = v15;
              }
            }
            else
            {
              *((_QWORD *)a2 + 3) = 0LL;
            }
          }
          else
          {
            *((_QWORD *)a2 + 3) = Pool2;
          }
        }
        *((_DWORD *)a2 + 8) = v18 >> 1;
        if ( !a4 )
          return (unsigned int)RelatedDevice;
LABEL_25:
        v16 = P[1];
        goto LABEL_26;
      }
    }
    else
    {
      v18 = 0;
    }
    Pool2 = 0LL;
    goto LABEL_7;
  }
  return 3221225485LL;
}
