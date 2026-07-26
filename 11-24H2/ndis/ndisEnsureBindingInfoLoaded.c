/*
 * XREFs of ndisEnsureBindingInfoLoaded @ 0x140145FC0
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x14018DDB8 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x140144740 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x140144898 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1401449F0 (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x140144B48 (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 *     ndisLoadNamedFilterAltitudes @ 0x14014649C (ndisLoadNamedFilterAltitudes.c)
 */

__int64 ndisEnsureBindingInfoLoaded()
{
  __int64 result; // rax

  result = ndisLoadNamedFilterAltitudes();
  if ( !(_DWORD)result )
  {
    result = netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058_();
    if ( !(_DWORD)result )
    {
      if ( !*((_BYTE *)qword_14011D088 + 96)
        || (result = netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09_(), !(_DWORD)result) )
      {
        result = netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6_();
        if ( !(_DWORD)result )
        {
          if ( *((_BYTE *)qword_14011D088 + 96) )
            return netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617_();
          else
            return 0LL;
        }
      }
    }
  }
  return result;
}
