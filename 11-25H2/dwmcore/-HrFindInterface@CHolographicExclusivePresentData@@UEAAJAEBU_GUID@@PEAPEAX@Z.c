/*
 * XREFs of ?HrFindInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802DFCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::HrFindInterface(
        CHolographicExclusivePresentData *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4781ba52_4074_45c2_9296_6f54fd9e0368.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4781ba52_4074_45c2_9296_6f54fd9e0368.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4781ba52_4074_45c2_9296_6f54fd9e0368.Data4;
  v5 = 0;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = (char *)this - 8;
  return v5;
}
