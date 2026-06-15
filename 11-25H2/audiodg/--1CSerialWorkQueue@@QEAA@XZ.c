/*
 * XREFs of ??1CSerialWorkQueue@@QEAA@XZ @ 0x140043880
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCSerialWorkQueue@@@std@@EEAAXXZ @ 0x14004B190 (-_Destroy@-$_Ref_count_obj2@VCSerialWorkQueue@@@std@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::~CSerialWorkQueue(CSerialWorkQueue *this)
{
  struct _TP_CLEANUP_GROUP *v2; // rcx

  v2 = (struct _TP_CLEANUP_GROUP *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    CloseThreadpoolCleanupGroupMembers(v2, 1, 0LL);
    CloseThreadpoolCleanupGroup(*((PTP_CLEANUP_GROUP *)this + 15));
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    CloseThreadpool(*(PTP_POOL *)this);
    *(_QWORD *)this = 0LL;
  }
  _Mtx_destroy_in_situ((CSerialWorkQueue *)((char *)this + 88));
}
