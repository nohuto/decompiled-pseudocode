/*
 * XREFs of KiOp_SGDTSIDT @ 0x1404AF780
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x140471674 (KiOpRetrieveRegMemAddress.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall KiOp_SGDTSIDT(__int64 a1)
{
  int v2; // ecx
  char v3; // cl
  __int64 v4; // xmm0_8
  void *IdtBase; // rcx
  __int16 v6; // ax
  __int64 v7; // rdi
  _TBYTE Src; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  void *v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h]

  v11 = 0LL;
  v10 = 0;
  *(_QWORD *)((char *)&Src + 2) = 0LL;
  if ( (KiBugCheckActive & 3) != 0 || PopHibernateHvMinloopEnabled )
  {
    v2 = 1;
    if ( VslVsmEnabled )
      goto LABEL_9;
  }
  else
  {
    v2 = 0;
  }
  if ( (KiNPIEPEnabled || (KeFeatureBits2 & 4) != 0) && (*(_BYTE *)(a1 + 81) == 1 || v2) )
  {
LABEL_9:
    v3 = *(_BYTE *)(a1 + 81);
    if ( (*(_BYTE *)(a1 + 65) & 0x38) != 0 )
    {
      if ( v3 )
      {
        v4 = KiOpIdtr;
        goto LABEL_15;
      }
      IdtBase = KeGetPcr()->IdtBase;
      v6 = 4095;
    }
    else
    {
      if ( v3 )
      {
        v4 = KiOpGdtr;
LABEL_15:
        *(_QWORD *)&Src = v4;
        HIWORD(Src) = -1;
LABEL_18:
        v7 = *(_QWORD *)(a1 + 32);
        v12 = v7;
        *(_DWORD *)v7 = -1073741819;
        if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v11, &v10, 0LL) < 0 )
        {
          v11 = (void *)-1LL;
        }
        else
        {
          memmove(v11, &Src, (-(__int64)(*(_BYTE *)(a1 + 58) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 10);
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 16) - *(_DWORD *)a1);
          ++KiOpDescriptorTableStoreSkip;
          *(_BYTE *)(a1 + 96) = 1;
        }
        if ( !*(_BYTE *)(a1 + 96) )
        {
          *(_DWORD *)v7 = -1073741819;
          *(_QWORD *)(v7 + 32) = 1LL;
          *(_QWORD *)(v7 + 40) = v11;
          *(_BYTE *)(a1 + 97) = 1;
        }
        return 0LL;
      }
      IdtBase = KeGetPcr()->NtTib.ExceptionList;
      v6 = 87;
    }
    LOWORD(Src) = v6;
    *(_QWORD *)((char *)&Src + 2) = IdtBase;
    goto LABEL_18;
  }
  return 0LL;
}
