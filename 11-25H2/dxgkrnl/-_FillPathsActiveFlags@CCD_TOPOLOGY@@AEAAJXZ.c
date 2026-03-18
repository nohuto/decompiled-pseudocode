/*
 * XREFs of ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1403E6FF0
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x140379894 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1402E8398 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403733CC (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x140373EE8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140373F28 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlags(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // bx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (__fastcall ***v8)(CCD_BTL *, int *); // rax
  int active; // ebx
  struct D3DKMT_HASH *v11; // [rsp+30h] [rbp-29h] BYREF
  __int128 v12; // [rsp+38h] [rbp-21h]
  __int64 v13; // [rsp+48h] [rbp-11h]
  __int16 v14; // [rsp+50h] [rbp-9h]
  __int128 v15; // [rsp+58h] [rbp-1h]
  __int64 v16; // [rsp+68h] [rbp+Fh]
  __int64 v17; // [rsp+70h] [rbp+17h]
  char v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  int v20; // [rsp+80h] [rbp+27h]
  __int64 v21; // [rsp+84h] [rbp+2Bh]
  __int64 v22; // [rsp+90h] [rbp+37h]
  unsigned __int16 i; // [rsp+C8h] [rbp+6Fh] BYREF

  v18 = 1;
  LODWORD(v11) = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v5 = 8;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v19 = 0;
  v20 = 1;
  v21 = 0LL;
  v22 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v11, 8LL, a3, a4);
  for ( i = 8; ; v5 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v11, v5, v6, v7) < v5 )
    {
      WdLogSingleEntry3(6LL, v5, this, *((_QWORD *)this + 8));
      WdLogGlobalForLineNumber = 5735;
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v11);
      return 3221225495LL;
    }
    v8 = (__int64 (__fastcall ***)(CCD_BTL *, int *))CCD_BTL::Global();
    active = CCD_BTL::RetrieveActiveTopology(v8, 0, 1, &v11, &i);
    if ( active >= 0 )
    {
      active = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology((CCD_TOPOLOGY *)&v11, (const struct CCD_TOPOLOGY *)&v11);
      if ( active >= 0 )
      {
        active = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v11);
        if ( active >= 0 )
        {
          CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, (const struct CCD_TOPOLOGY *)&v11);
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v11);
          return (unsigned int)active;
        }
      }
    }
    if ( active != -1073741789 )
      break;
  }
  WdLogSingleEntry3(2LL, active, this, *((_QWORD *)this + 8));
  WdLogGlobalForLineNumber = 5748;
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v11);
  return (unsigned int)active;
}
