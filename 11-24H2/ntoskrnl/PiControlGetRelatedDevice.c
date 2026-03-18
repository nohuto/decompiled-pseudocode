/*
 * XREFs of PiControlGetRelatedDevice @ 0x1408BD8A0
 * Callers:
 *     <none>
 * Callees:
 *     PiGetRelatedDevice @ 0x1408BEE58 (PiGetRelatedDevice.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408D0240 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetRelatedDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int16 v4; // cx
  void *Pool2; // rbx
  int v8; // eax
  int RelatedDevice; // edi
  void *v11; // rcx
  int v12; // eax
  PVOID v13; // rax
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+38h] BYREF

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
      v15 = 2 * v8;
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
          v4 = (__int16)P[0];
        }
LABEL_7:
        if ( a4 )
        {
          if ( v4 )
          {
            v13 = (PVOID)ExAllocatePool2(0x101uLL);
            P[1] = v13;
            if ( !v13 )
            {
              RelatedDevice = -1073741670;
              goto LABEL_26;
            }
            RelatedDevice = PiControlCopyUserModeCallersBuffer(v13, a4, 1);
            if ( RelatedDevice < 0 )
            {
              ExFreePoolWithTag(P[1], 0);
              v13 = 0LL;
              P[1] = 0LL;
LABEL_26:
              if ( v13 )
                ExFreePoolWithTag(v13, 0);
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
        RelatedDevice = PiGetRelatedDevice(P, Pool2, &v15, *((unsigned int *)a2 + 4));
        if ( Pool2 )
        {
          if ( a4 )
          {
            if ( 2 * *((_DWORD *)a2 + 8) )
            {
              v11 = (void *)*((_QWORD *)a2 + 3);
              if ( v11 )
              {
                v12 = PiControlCopyUserModeCallersBuffer(v11, a4, 0);
                if ( v12 < 0 )
                  RelatedDevice = v12;
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
        *((_DWORD *)a2 + 8) = v15 >> 1;
        if ( !a4 )
          return (unsigned int)RelatedDevice;
LABEL_25:
        v13 = P[1];
        goto LABEL_26;
      }
    }
    else
    {
      v15 = 0;
    }
    Pool2 = 0LL;
    goto LABEL_7;
  }
  return 3221225485LL;
}
